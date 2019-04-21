#include "opcode_runner.h"

int exec_nop(Code * code, Stack * stack, int ip)
{
  return ++ip;
}

int exec_iadd(Code * code, Stack * stack, int ip)
{
  short b = stack_pop(stack);
  short a = stack_pop(stack);
  
  stack_push(stack, a + b);
  
  return ++ip;
}

int exec_isub(Code * code, Stack * stack, int ip)
{
  short b = stack_pop(stack);
  short a = stack_pop(stack);
  
  stack_push(stack, a - b);
  
  return ++ip;
}

int exec_imul(Code * code, Stack * stack, int ip)
{
  short b = stack_pop(stack);
  short a = stack_pop(stack);

  stack_push(stack, a * b);
  
  return ++ip;
}

int exec_idiv(Code * code, Stack * stack, int ip)
{
  short b = stack_pop(stack);
  short a = stack_pop(stack);
  
  stack_push(stack, a / b);
  
  return ++ip;
}

int exec_iconst(Code * code, Stack * stack, int ip)
{
  short v = code_fetch(code, ++ip);

  stack_push(stack, v);
  return ++ip;
}

void opcode_runner_init(opcode_runner * ops)
{
  ops[NOP] = exec_nop;
  ops[IADD] = exec_iadd;
  ops[ISUB] = exec_isub;
  ops[IMUL] = exec_imul;
  ops[IDIV] = exec_idiv;
  ops[ICONST] = exec_iconst;
  
  
}
