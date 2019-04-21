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
Stack stack_new(int size);

inline stack_obj_t stack_pop(Stack * stack) { return stack->contents[stack->top--]; }

#endif
