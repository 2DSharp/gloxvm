#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include "token.h"

int find_key(const char * needle, char ** haystack, int sz)
{
    for (int i = 0; i < sz; i++)
      if (strcmp(needle, haystack[i]) == 0)
	return i;
    return -1;
}

int is_var_declaration(char * buffer)
{
  char * var_types[] = { "int", "char", "string", "float" };

  return (find_key(buffer, var_types, 4) > -1);
    
}

Token classify_keywords(char * buffer, int line)
{
  Token token;
  token.line = line;
  token.value = buffer;

  if (is_var_declaration(buffer))
    token.name = "VAR_DECLARATION";
  
  else
    token.name = "NAME";
  
  return token;
}

int main(){
  char ch, buffer[80], operators[] = "+-*/%=";
  FILE *fp;
  int line = 1;
  int buff_end = 0;
  Token * head;
  
  fp = fopen("program.c","r");

  if(fp == NULL){
    printf("error while opening the file\n");
    exit(0);
  }

  while((ch = fgetc(fp)) != EOF){ // tokenize

    if (isalnum(ch))
      buffer[buff_end++] = ch;

    int nl = (ch == '\n');
    
    if ((ch == ' ' || nl) && buff_end != 0) {
      // end buffer
      buffer[buff_end] = '\0';
      buff_end = 0;

      Token token = classify_keywords(buffer, line);
      printf("%d\t%s\t%s\n", token.line, token.name, token.value);

      if (nl)
	line++;
    }

    
    //printf("%c", ch);
  }

  fclose(fp);

  return 0;
}
