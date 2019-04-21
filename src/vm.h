#ifndef VM_H
#define VM_H

#include "stack.h"
#include "code.h"
#include "bytecode.h"
#include "opcode_runner.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct vm_t
{
  int instr_ptr;
  int frame_ptr;
  
  Stack * stack;
  
} VM;


VM * vm_init(uint32_t stack_size);
void vm_run(VM * vm, Code * code);
void vm_fetch();
void vm_decode();
void vm_execute();

#endif /* vm.h */
