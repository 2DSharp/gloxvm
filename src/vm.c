#include "vm.h"

VM * vm_init(uint32_t stack_size)
{
  VM * vm = (VM*) malloc(sizeof(VM));
  vm->stack = stack_new(stack_size);
  vm->frame_ptr = -1;
  vm->instr_ptr = 0;

  return vm;
}

void vm_execute(VM * vm, Code * code_mem, short opcode, opcode_runner * runners)
{
    vm->instr_ptr = runners[opcode](code_mem, vm->stack, vm->instr_ptr);
    ++vm->instr_ptr;
}

void vm_run(VM * vm, Code * code_mem)
{
  short opcode;
  opcode_runner runners[128];
  
  opcode_runner_init(runners);
  opcode = code_fetch(code_mem, vm->instr_ptr);
  
  while (opcode != HALT) {
    printf("Opcode: %4d\t IP: %d\t", opcode, vm->instr_ptr);
    vm_execute(vm, code_mem, opcode, runners);
    opcode = code_fetch(code_mem, vm->instr_ptr);
    stack_debug_print(vm->stack);
    printf("\tTop: %d\n", vm->stack->top);
  }   
}

void vm_close(VM * vm)
{
  stack_flush(vm->stack);
  free(vm);
}
