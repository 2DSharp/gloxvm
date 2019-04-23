#include "opcode_runner.h"

void exec_nop()
{
  return;
}

void exec_iadd(Stack * stack)
{
  short b = stack_pop(stack);
  short a = stack_pop(stack);
  
  stack_push(stack, a + b);
}

void exec_isub(Stack * stack)
{
  short b = stack_pop(stack);
  short a = stack_pop(stack);
  
  stack_push(stack, a - b);
}

void exec_imul(Stack * stack)
{
  short b = stack_pop(stack);
  short a = stack_pop(stack);

  stack_push(stack, a * b);
}

void exec_idiv(Stack * stack)
{
  short b = stack_pop(stack);
  short a = stack_pop(stack);
  
  stack_push(stack, a / b);
}

short exec_iconst(Stack * stack, const Code * code, short ip)
{
  stack_obj_t v = code_fetch(code, ++ip);
  stack_push(stack, v);
  return ++ip;
}

void exec_print(Stack * stack)
{
  short v = stack_pop(stack);
  printf("%d", v);
  /* We don't want to remove this from the stack */
  stack_push(stack, v);
}

/* Temporary till we start supporting ASCII prints */
void exec_println(Stack * stack)
{
  exec_print(stack);
  printf("\n");
}

short exec_load(Stack * stack, const Code * code, short ip, Memory * mem)
{
  short offset = code_fetch(code, ++ip);
  stack_push(stack, mem->locals[offset]);
  return ++ip;
}


short exec_store(Stack * stack, const Code * code, short ip, Memory * mem)
{

  short offset = code_fetch(code, ++ip);
  mem->locals[offset] = stack_pop(stack);
  return ++ip;
}

short exec_jmp(const Code * code, short ip)
{
  return code_fetch(code, ++ip);
}

/* 
 * Conditional Jump 
 * If true on top of stack
 */
short exec_jmpt(Stack * stack, const Code * code, short ip)
{
  int addr = code_fetch(code, ++ip);
  if (stack_pop(stack) == TRUE)
    ip = addr;
  else
     ++ip;

  return ip;
}

/**
 * if equals, set stack top to true
 * To be used often with jmps
 */
void exec_ieq(Stack * stack)
{
  short b = stack_pop(stack);
  short a = stack_pop(stack);
  unsigned int isEqual = (a == b) ? TRUE : FALSE;
  stack_push(stack, isEqual);
}

void exec_ilt(Stack * stack)
{
  short b = stack_pop(stack);
  short a = stack_pop(stack);
  unsigned int isEqual = (a < b) ? TRUE : FALSE;
  stack_push(stack, isEqual);
}

void opcode_runner_init(Opcode * ops)
{
  ops[NOP].type = NONE;
  ops[NOP].exec_none = exec_nop;

  ops[IADD].type = NOARGS;
  ops[IADD].exec_noargs = exec_iadd;

  ops[ISUB].type = NOARGS;
  ops[ISUB].exec_noargs = exec_isub;

  ops[IMUL].type = NOARGS;
  ops[IMUL].exec_noargs = exec_imul;

  ops[IDIV].type = NOARGS;
  ops[IDIV].exec_noargs = exec_idiv;

  ops[ICONST].type = WITH_ARGS;
  ops[ICONST].exec_args = exec_iconst;
  
  ops[PRINT].type = NOARGS;
  ops[PRINT].exec_noargs = exec_print;
  
  ops[PRINTLN].type = NOARGS;
  ops[PRINTLN].exec_noargs = exec_println;

  ops[LOAD].type = MEMORY_HANDLER;
  ops[LOAD].exec_mem = exec_load;

  ops[STORE].type = MEMORY_HANDLER;
  ops[STORE].exec_mem = exec_store;
  
  ops[JMP].type = UNCONDITIONAL_BRANCH;
  ops[JMP].exec_ujmp = exec_jmp;

  ops[JMPT].type = CONDITIONAL_BRANCH;
  ops[JMPT].exec_args = exec_jmpt;

  ops[ILT].type = NOARGS;
  ops[ILT].exec_noargs = exec_ilt;

  ops[IEQ].type = NOARGS;
  ops[IEQ].exec_noargs = exec_ieq;
}
