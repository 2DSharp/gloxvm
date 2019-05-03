#ifndef LLIST_H
#define LLIST_H

#include <stdlib.h>
#include "token.h"

typedef struct token_node_t 
{
  struct token_node_t * next;
  struct token_node_t * prev;
  const Token * token;  
} TokenNode;

void ll_push_back(TokenNode * head, const Token * token);
void ll_flush_list(TokenNode * head);
TokenNode * ll_create_list(const Token * token);

#endif
