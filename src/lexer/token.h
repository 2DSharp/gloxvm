#ifndef TOKEN_H
#define TOKEN_H

typedef struct token_t
{
  unsigned int line; // 10
  char * name; //i
  char * value; // identifier
} Token;

#endif
