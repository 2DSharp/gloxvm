#ifndef LLIST_H
#define LLIST_H

#include <stdlib.h>
#include "token.h"

typedef struct token_node_t 
{
  struct token_node_t * next;
  struct token_node_t * prev;
  Token * token;  
} TokenNode;

void push_back(TokenNode * head, Token * token);
void flush_list(TokenNode * head);
TokenNode * create_list(Token * token);

#endif
