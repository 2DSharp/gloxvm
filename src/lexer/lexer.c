#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include "token.h"
#include "linked_list.h"

typedef enum bool_t
  {
    false = 0,
    true = 1
  } Boolean;
    
typedef enum str_type
  {
    NUMBER, STRING_LITERAL, VARCHAR
  } Str_Type;

typedef struct number_t {
  int periods;
} Number;

typedef struct string_t {
  int buff_end;
  char arr[512];
  Str_Type type;
  Boolean is_complete;
  
  union {
    int num_periods;
  };
  
} String;

TokenNode * push_token(TokenNode * head, Token token)
{

  if (head == NULL) {
    head = ll_create_list(token);
  }
  else {
    ll_push_back(head, token);
	//printf("Here: %s----\n", head->token.value);
	//printf("%d\t%s\n", node->token.line, node->token.value);
  }
    //printf("Care: %s----\n", head->token.value);
    //printf("%c", ch);

  return head;
}

int find_key(const char * needle, char ** haystack, int sz)
{
    for (int i = 0; i < sz; i++)
      if (strcmp(needle, haystack[i]) == 0)
	return i;
    return -1;
}

int is_var_declaration(const char * buffer)
{
  char * var_types[] = { "int", "char", "string", "float" };
  return (find_key(buffer, var_types, 4) > -1);    
}

int string_match(const char * buffer, char * expected)
{
  return (strcmp(buffer, expected) == 0);
}

Token tokenize_keywords(const char * buffer, int line)
{
  Token token;
  token.line = line;

  if (is_var_declaration(buffer))
    token.name = "VAR_TYPE";
  else if (string_match(buffer, "if"))
    token.name = "IF";
  else if (string_match(buffer, "else"))
    token.name = "ELSE";
  else if (string_match(buffer, "fn"))
    token.name = "FUNCTION";
  else
    token.name = "NAME";

  strncpy(token.value, buffer, sizeof(buffer) - 1);
  return token;
}

Token tokenize_symbols(const char c, int line)
{
  Token token;
  token.line = line;
  
  switch(c) {
      case '(':
	  token.name = "LPAREN";
	  break;

      case ')':
	  token.name = "RPAREN";
	  break;

      case '{':
	  token.name = "LBRACE";
	  break;
	  
      case '}' :
	  token.name = "RBRACE";
	  break;

      case ':':
	  token.name = "COLON";
	  break;

      case '=':
	  token.name = "EQUALS";
	  break;
  }
  token.value[0] = c;
  token.value[1] = '\0';
  //strncpy(token.value, strcat("", &c), sizeof(&c) - 1);
  return token;
}

Token tokenize_number(char * buffer, int line)
{
  Token token;
  token.line = line;
  token.name = "NUMBER";
  strncpy(token.value, buffer, sizeof(buffer) - 1);

  return token;
}

Token tokenize_string_literal(char * buffer, int line)
{
  Token token;
  token.line = line;
  token.name = "STRING_LITERAL";
  strncpy(token.value, buffer, sizeof(buffer) - 1);
  
  return token;
}

int tokenize_nums(char ch, char * buffer, int buff_end)
{
  if (isdigit(ch) || ch == '.')
    buffer[buff_end++] = ch;

  else {
    buffer[buff_end] = '\0';
    return 1;
  }

  return 0;
}

void push_to_str(char ch, String * str)
{
  str->arr[++str->buff_end] = ch;
}

Boolean is_str_head(char ch, int buff_end)
{
  return (buff_end == -1 && (isalnum(ch) || ch == '_' || ch == '"'));
}

void process_str_head(char ch, String * str)
{
  if (isdigit(ch))
    str->type = NUMBER;
  else if (ch == '"') {
    str->type = STRING_LITERAL;
  }
  else if (isalpha(ch) || ch == '_')
    str->type = VARCHAR;

  push_to_str(ch, str);
}

Boolean str_buffer_exists(String * str)
{
  return (str->buff_end > -1) && (str->arr[str->buff_end] != '\0');
}

void end_str_buffer(String * str)
{
  str->arr[++str->buff_end] = '\0';
}

Boolean is_str_buffer_complete(String * str)
{
   return (str->buff_end > -1) && (str->arr[str->buff_end] == '\0');
}

void process_str_num(char ch, String * str)
{
  if (isdigit(ch)) {
      push_to_str(ch, str);
    }
    else if (ch == '.' && str->num_periods == 0) {
      push_to_str(ch, str);
      ++str->num_periods;
    }
    else {
      end_str_buffer(str);
    }
 
}

void process_str_literal(char ch, String * str)
{
  push_to_str(ch, str);
  
  if (ch == '"')
    end_str_buffer(str);
}

void process_str_varchar(char ch, String * str)
{
  if (isalnum(ch) || ch == '_') {
    push_to_str(ch, str);
  }
  else {
    end_str_buffer(str);
  }
}
void process_str(char ch, String * str)
{
  if (str->type == NUMBER) {
    process_str_num(ch, str);
  }
  else if (str->type == STRING_LITERAL) {
    process_str_literal(ch, str);
  }
  else if (str->type == VARCHAR) {
    process_str_varchar(ch, str);
  }
}

Token tokenize_string(String * str, int line)
{
  Token token;
  if (str->type == NUMBER)
    token = tokenize_number(str->arr, line);
  else if (str->type == STRING_LITERAL)
    token = tokenize_string_literal(str->arr, line);
  else 
    token = tokenize_keywords(str->arr, line);

  return token;
}

void str_reset(String * str)
{
  str->buff_end = -1;
}

void update_alphanum_buffer(char ch, String * str)
{
  if (is_str_head(ch, str->buff_end)) {
    process_str_head(ch, str);
      //printf("Here");
  }

  else if (str_buffer_exists(str)) {
    process_str(ch, str);
      //printf("%c", ch);
  }
}

Boolean is_special(char ch)
{
  return ch == '"';
}
Boolean is_symbol(char ch)
{
    int is_blank = (ch == ' ' || ch == '\n');    
    return (!is_blank && !isalnum(ch) && !is_special(ch));
}

int main(){
  char ch;
  FILE *fp;
  int line = 1;
  TokenNode * head = NULL;
  int tokenized;
  String * str = malloc(sizeof(String));
  str->buff_end = -1;
  str->num_periods = 0;
  
  fp = fopen("program.glox","r");

  if(fp == NULL){
    printf("error while opening the file\n");
    exit(0);
  }

  while((ch = fgetc(fp)) != EOF){ // tokenize

    Token token;
    tokenized = 0;

    update_alphanum_buffer(ch, str);

    if (is_str_buffer_complete(str)) {
      token = tokenize_string(str, line);
      head = push_token(head, token);
      str_reset(str);
    }

    if (is_symbol(ch) && str->buff_end == -1) {
      token = tokenize_symbols(ch, line);
      head = push_token(head, token);
    }

    if (ch == '\n')
      line++;
  }

  fclose(fp);

  TokenNode * ptr = head;

  while (ptr != NULL) {

    printf("{ Line: %d\tName: %s\t\tValue: %s\tNext: %d }\n", ptr->token.line, ptr->token.name, ptr->token.value, ptr->next);
    ptr = ptr->next;
  }

  ll_flush_list(head);
  free(str);
  
  return 0;
}
