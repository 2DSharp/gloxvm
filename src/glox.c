#include <stdio.h>
#include <stdint.h>

#include "stack.h"
#include "vm.h"
#include "code.h"

int main(int argc, char **argv )
{
  VM * vm;
  uint32_t stack_size = 1024;
  
  if (argc > 1) {
    stack_size = atoi(argv[1]);
  }
  vm = vm_init(stack_size);
  short instrs[] = { NOP, HALT };
  Code * code = code_init(instrs, 2);

  printf("IP: %d\n", vm->instr_ptr);
  vm_run(vm, code);
  //printf("IP: %d", vm->instr_ptr);
  
}
