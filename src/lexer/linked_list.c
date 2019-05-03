#include "linked_list.h"

void create_end_node(TokenNode * ptr, Token * token)
{
  TokenNode * new_node = malloc(sizeof(TokenNode));

  new_node->prev = ptr;
  new_node->next = NULL;
  new_node->token = token;

  ptr->next = new_node;
}

TokenNode * create_list(Token * token)
{
  TokenNode * head = malloc(sizeof(TokenNode));
  head->prev = NULL;
  head->next = NULL;
  head->token = token;

  return head;
}

void push_back(TokenNode * head, Token * token)
{
  TokenNode * ptr;
  ptr = head;

  while (ptr->next != NULL) {
    ptr = ptr->next;
  }

  create_end_node(ptr, token);
}

void flush_list(TokenNode * head)
{
  TokenNode * ptr, * prev;
  prev = ptr = head;

  while (ptr->next != NULL) {
    prev = ptr;
    ptr = ptr->next;
    free(prev);
  }

  if (ptr->next == NULL)
    free(ptr);
}
