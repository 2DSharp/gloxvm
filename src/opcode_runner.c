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
  /* We don't want to remove this from the stack */
  stack_push(stack, v);
  return ++ip;
}

/* Temporary till we start supporting ASCII prints */
int exec_println(Code * code, Stack * stack, int ip)
{
  ip =  exec_print(code, stack, ip);
  printf("\n");
  return ip;
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

/* 
 * Conditional Jump 
 * If true on top of stack
 */
int exec_jmpt(Code * code, Stack * stack, int ip)
{
  int addr = code_fetch(code, ++ip);
  if (stack_pop(stack) == TRUE)
    return addr;
  else
    return ++ip;
}

/**
 * if equals, set stack top to true
 * To be used often with jmps
 */
int exec_ieq(Code * code, Stack * stack, int ip)
{
  short b = stack_pop(stack);
  short a = stack_pop(stack);
  unsigned int isEqual = (a == b) ? TRUE : FALSE;
  stack_push(stack, isEqual);
  
  return ++ip;  
}

int exec_ilt(Code * code, Stack * stack, int ip)
{
  short b = stack_pop(stack);
  short a = stack_pop(stack);
  unsigned int isEqual = (a < b) ? TRUE : FALSE;
  stack_push(stack, isEqual);
  
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
  ops[PRINT] = exec_print;
  ops[PRINTLN] = exec_println;
  ops[LOAD] = exec_load;
  ops[STORE] = exec_store;
  ops[JMP] = exec_jmp;
  ops[JMPT] = exec_jmpt;
  ops[ILT] = exec_ilt;
  ops[IEQ] = exec_ieq;
}
