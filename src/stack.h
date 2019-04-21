#ifndef STACK_H
#define STACK_H

#include <stdlib.h>

typedef int stack_obj_t;
typedef struct stack_t
{
  int top;
  int size;
  int * contents;
} Stack;

int stack_push(Stack * stack, int v);
Stack * stack_new(int size);
void stack_debug_print(Stack * stack);
stack_obj_t stack_pop(Stack * stack);

#endif
