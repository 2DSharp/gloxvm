#include "vm.h"

VM * vm_init(size_t stack_size, Memory * mem)
{
  VM * vm = (VM*) malloc(sizeof(VM));
  vm->stack = stack_new(stack_size);
  vm->instr_ptr = 0;
  vm->memory = mem;
  
  return vm;
}

void vm_run(VM * vm, Code * code_mem, int debug)
{
  short opcode;
  opcode_runner exec[128];
  
  opcode_runner_init(exec);
  opcode = code_fetch(code_mem, vm->instr_ptr);
  
  while (opcode != HALT) {
    
    exec[opcode](code_mem, vm);

    if (debug) {
      printf("Opcode: %04d\t IP: %d\t", opcode, vm->instr_ptr);
    }

    opcode = code_fetch(code_mem, vm->instr_ptr);

    if (debug) {
      stack_debug_print(vm->stack);
      printf("\tTop: %d\n", vm->stack->top);
    }
  }
}

void vm_close(VM * vm)
{
  stack_flush(vm->stack);
  free(vm);
}
