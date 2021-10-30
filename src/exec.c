#include "exec.h"
#define  __get_data(bytecode, type) (*(type *) bytecode.val)


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
  stack_obj_t v = __get_data(code_fetch(code, ++ip), short);
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
  short offset = __get_data(code_fetch(code, ++ip), short);
  short addr = offset + mem->frame_ptr;
  stack_push(stack, mem->locals[addr]);
  return ++ip;
}


short exec_store(Stack * stack, const Code * code, short ip, Memory * mem)
{

  short offset = __get_data(code_fetch(code, ++ip), short);
  mem->locals[mem->frame_ptr + offset] = stack_pop(stack);
  return ++ip;
}

short exec_jmp(const Code * code, short ip)
{
  return __get_data(code_fetch(code, ++ip), short);
}

/* 
 * Conditional Jump 
 * If true on top of stack
 */
short exec_jmpt(Stack * stack, const Code * code, short ip)
{
  short addr = __get_data(code_fetch(code, ++ip), short);
  if (stack_pop(stack))
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
  unsigned int isLessThan = (a < b) ? TRUE : FALSE;
  stack_push(stack, isLessThan);
}

void exec_pop(Stack * stack)
{
  stack_pop(stack);
}

short exec_call(Stack * stack, const Code * code, short ip, Memory * mem, const Function * fn_pool, int * caller_index)
{
  short target_index = __get_data(code_fetch(code, ++ip), short);

  Function curr_fn = fn_pool[*caller_index];
  
  Function target_fn = fn_pool[target_index];

  short fp_new = mem->frame_ptr + curr_fn.locals;

  for (int i = 1; i <= target_fn.n_args; i ++) {
      short v = stack_pop(stack);
      mem->locals[fp_new + target_fn.n_args - i] = v; 
    }

  stack_push(stack, *caller_index); // Store this to access it later
  stack_push(stack, mem->frame_ptr); // current frame ptr
  stack_push(stack, ip + 1); // current ip
  
  mem->frame_ptr = fp_new;
  ip = fn_pool[target_index].addr;
  *caller_index = target_index;
  return ip;
}

short exec_ret(Stack * stack, const Code * code, short ip, Memory * mem, const Function * fn_pool, int * caller_index)
{
  short ret_val;
  int has_returned = fn_pool[*caller_index].return_type > 0;

  if (has_returned) {
    /* Is not void */
    ret_val = stack_pop(stack);
  }

  /* Restore the previous state from the stack */
  short ret_ip = stack_pop(stack);
  mem->frame_ptr = stack_pop(stack);
  *caller_index = stack_pop(stack);
  
  if (has_returned)
    stack_push(stack, ret_val);

  return ret_ip;
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

  ops[POP].type = NOARGS;
  ops[POP].exec_noargs = exec_pop;

  ops[CALL].type = CALLER;
  ops[CALL].exec_caller = exec_call;

  ops[RET].type = CALLER;
  ops[RET].exec_caller = exec_ret;
}

