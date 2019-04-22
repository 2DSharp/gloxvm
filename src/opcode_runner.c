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

int exec_print(Code * code, Stack * stack, int ip)
{
  short v = stack_pop(stack);
  printf("%d", v);
  return ++ip;
}

int exec_load(Code * code, Stack * stack, int ip)
{
  stack_load(stack, code_fetch(code, ++ip));
  return ++ip;
}

int exec_store(Code * code, Stack * stack, int ip)
{
  stack_store(stack, code_fetch(code, ++ip));
  return ++ip;
}

int exec_jmp(Code * code, Stack * stack, int ip)
{
  return code_fetch(code, ++ip);
}

void opcode_runner_init(opcode_runner * ops)
{
  ops[NOP] = exec_nop;
  ops[IADD] = exec_iadd;
  ops[ISUB] = exec_isub;
  ops[IMUL] = exec_imul;
  ops[IDIV] = exec_idiv;
  ops[ICONST] = exec_iconst;
  ops[PRINT] = exec_print;
  ops[LOAD] = exec_load;
  ops[STORE] = exec_store;
  ops[JMP] = exec_jmp;
}
