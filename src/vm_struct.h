#ifndef VM_H
#define VM_H

#include "stack.h"
#include "memory.h"

typedef struct vm_t
{
  int instr_ptr;
  Stack * stack;
  Memory * memory;
} VM;

#endif
