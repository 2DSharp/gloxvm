#include "stack.h"
#include <stdio.h>

Stack * stack_new(int size)
{
  Stack * stack = malloc(sizeof(Stack));
  stack->top = 0;
  stack->size = size;
  
  stack->contents = malloc(size * sizeof(stack_obj_t));

  for (int i = 0; i < size; i++)
    stack->contents[i] = 0;
  return stack;
}

int stack_push(Stack * stack, stack_obj_t val)
{
  stack->contents[++stack->top] = val;
  return stack->top;
}
stack_obj_t stack_pop(Stack * stack)
{
  int v = stack->contents[stack->top--];
  return v;
}

void stack_debug_print(Stack * stack)
{
  printf("[ ");
  for ( int i = stack->top; i > -1; i--) {
    printf("%d ", stack->contents[i]);
  }
  printf("]");
}

void stack_flush(Stack * stack)
{
  free(stack->contents);
  free(stack);
}
