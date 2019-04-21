#include "stack.h"

Stack stack_new(int size)
{
  Stack stack;
  stack.top = -1;
  stack.size = size;
  stack.contents = malloc(sizeof(stack_obj_t) * size);

  return stack;
}

int stack_push(Stack * stack, int val)
{
  stack->contents[stack->top++] = val;
  return stack->top;
}


