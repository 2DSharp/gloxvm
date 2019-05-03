#include "linked_list.h"

void ll_create_end_node(TokenNode * ptr, const Token * token)
{
  TokenNode * new_node = malloc(sizeof(TokenNode));

  new_node->prev = ptr;
  new_node->next = NULL;
  new_node->token = token;

  ptr->next = new_node;
}

TokenNode * ll_create_list(const Token * token)
{
  TokenNode * head = malloc(sizeof(TokenNode));
  head->prev = NULL;
  head->next = NULL;
  head->token = token;

  return head;
}

void ll_push_back(TokenNode * head, const Token * token)
{
  TokenNode * ptr;
  ptr = head;

  while (ptr->next != NULL) {
    ptr = ptr->next;
  }

  ll_create_end_node(ptr, token);
}

void ll_flush_list(TokenNode * head)
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
