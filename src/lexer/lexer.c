#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include "token.h"
#include "linked_list.h"

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

Token classify_keywords(const char * buffer, int line)
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

Token classify_symbols(const char c, int line)
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
  strncpy(token.value, &c, sizeof(&c) - 1);
  return token;
}

Token classify_number(char * buffer, int line)
{
  Token token;
  token.line = line;
  token.name = "NUMBER";
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


int main(){
  char ch, buffer[80], operators[] = "+-*/%=";
  FILE *fp;
  int line = 1;
  int buff_end = 0;
  TokenNode * head = NULL;
  int tokenized;
  int is_num_buff = 0;
  
  fp = fopen("program.glox","r");

  if(fp == NULL){
    printf("error while opening the file\n");
    exit(0);
  }

  while((ch = fgetc(fp)) != EOF){ // tokenize

    Token token;
    tokenized = 0;
  
    if ((buff_end == 0) && isdigit(ch))
      is_num_buff = 1;

    if (is_num_buff) {

      if (tokenize_nums(ch, buffer, buff_end++)){

	token = classify_number(buffer, line);
	buff_end = is_num_buff = 0;
	tokenized = 1;
      }
    } else {

      if (isalnum(ch))
	buffer[buff_end++] = ch;
    
      // Look for keywords
      if (!isalnum(ch) && buff_end != 0) {
	// stop if you find a space/symbol in between
	buffer[buff_end] = '\0';
	buff_end = 0;

	token = classify_keywords(buffer, line);
	tokenized = 1;
      }
    }
    
    int is_blank = (ch == ' ' || ch == '\n');
    
    if (!is_blank && buff_end == 0 && !tokenized) {

      token = classify_symbols(ch, line);
      tokenized = 1;
    }

    if (ch == '\n')
      line++;
    
    if (tokenized) {
      if (head == NULL) {
	head = ll_create_list(token);
      }
      else {
	ll_push_back(head, token);
	//printf("Here: %s----\n", head->token.value);
	//printf("%d\t%s\n", node->token.line, node->token.value);
      }
    }

      //printf("Care: %s----\n", head->token.value);

    
    //printf("%c", ch);
  }

  fclose(fp);

  TokenNode * ptr = head;

  while (ptr != NULL) {

    printf("{ Line: %d\tName: %s\tValue: %s\tNext: %d }\n", ptr->token.line, ptr->token.name, ptr->token.value, ptr->next);
    ptr = ptr->next;
  }
    
  return 0;
}
