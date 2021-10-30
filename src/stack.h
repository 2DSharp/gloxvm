#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include "includes/bytecode.h"

typedef short stack_obj_t;
typedef struct stack_t
{
  int top;
  int size;
  stack_obj_t * contents;
} Stack;

int stack_push(Stack * stack, stack_obj_t val);
Stack * stack_new(int size);
void stack_debug_print(Stack * stack);
stack_obj_t stack_pop(Stack * stack);

void stack_flush(Stack * stack);

#endif
