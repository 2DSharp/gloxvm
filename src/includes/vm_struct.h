#ifndef VM_STRUCT_H
#define VM_STRUCT_H

#include "../stack.h"
#include "../memory.h"

typedef enum state_t
  { ST_RUNNING, ST_HALTED, ST_INVALID } State;

typedef struct vm_t
{
  int instr_ptr;
  Stack * stack;
  Memory * memory;
  State state;
} VM;

#endif
