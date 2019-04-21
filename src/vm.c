#include "vm.h"

VM * vm_init(uint32_t stack_size)
{

  Stack stack;
  stack = stack_new(stack_size);

  VM * vm = (VM*) malloc(sizeof(VM));
  vm->stack = &stack;
  vm->frame_ptr = -1;
  vm->instr_ptr = 0;

  return vm;
}

void vm_run(VM * vm, Code * code)
{
  short opcode = NOP;
  opcode_runner runners[128];
  op_nop(vm->stack, vm->instr_ptr);
  //opcode_runner_init(runners);
  
  while (opcode != HALT) {
    opcode = code_fetch(code, vm->instr_ptr++);
    printf("Opcode: %d\t IP: %d\n", opcode, vm->instr_ptr);
    vm->instr_ptr = runners[opcode](vm->stack, vm->instr_ptr);
  }
    
}
