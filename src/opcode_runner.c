#include "opcode_runner.h"

void exec_nop(Code * code, VM * vm)
{
  ++vm->instr_ptr;
}

void exec_iadd(Code * code, VM * vm)
{
  short b = stack_pop(vm->stack);
  short a = stack_pop(vm->stack);
  
  stack_push(vm->stack, a + b);
  
   ++vm->instr_ptr;
}

void exec_isub(Code * code, VM * vm)
{
  short b = stack_pop(vm->stack);
  short a = stack_pop(vm->stack);
  
  stack_push(vm->stack, a - b);
  
   ++vm->instr_ptr;
}

void exec_imul(Code * code, VM * vm)
{
  short b = stack_pop(vm->stack);
  short a = stack_pop(vm->stack);

  stack_push(vm->stack, a * b);
  
   ++vm->instr_ptr;
}

void exec_idiv(Code * code, VM * vm)
{
  short b = stack_pop(vm->stack);
  short a = stack_pop(vm->stack);
  
  stack_push(vm->stack, a / b);
  
   ++vm->instr_ptr;
}

void exec_iconst(Code * code, VM * vm)
{
  short v = code_fetch(code, ++vm->instr_ptr);
  stack_push(vm->stack, v);
   ++vm->instr_ptr;
}

void exec_print(Code * code, VM * vm)
{
  short v = stack_pop(vm->stack);
  printf("%d", v);
  /* We don't want to remove this from the stack */
  stack_push(vm->stack, v);
   ++vm->instr_ptr;
}

/* Temporary till we start supporting ASCII prints */
void exec_println(Code * code, VM * vm)
{
  exec_print(code, vm);
  printf("\n");
}

void exec_load(Code * code, VM * vm)
{
  stack_load(vm->stack, code_fetch(code, ++vm->instr_ptr));
  ++vm->instr_ptr;
}

void exec_store(Code * code, VM * vm)
{
  stack_store(vm->stack, code_fetch(code, ++vm->instr_ptr));
  ++vm->instr_ptr;
}

void exec_jmp(Code * code, VM * vm)
{
   code_fetch(code, ++vm->instr_ptr);
}

/* 
 * Conditional Jump 
 * If true on top of stack
 */
void exec_jmpt(Code * code, VM * vm)
{
  int addr = code_fetch(code, ++vm->instr_ptr);
  if (stack_pop(vm->stack) == TRUE)
    vm->instr_ptr = addr;
  else
     ++vm->instr_ptr;
}

/**
 * if equals, set stack top to true
 * To be used often with jmps
 */
void exec_ieq(Code * code, VM * vm)
{
  short b = stack_pop(vm->stack);
  short a = stack_pop(vm->stack);
  unsigned int isEqual = (a == b) ? TRUE : FALSE;
  stack_push(vm->stack, isEqual);
  
   ++vm->instr_ptr;  
}

void exec_ilt(Code * code, VM * vm)
{
  short b = stack_pop(vm->stack);
  short a = stack_pop(vm->stack);
  unsigned int isEqual = (a < b) ? TRUE : FALSE;
  stack_push(vm->stack, isEqual);
  
  ++vm->instr_ptr;
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
