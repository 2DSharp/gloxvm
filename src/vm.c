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
