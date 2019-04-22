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
  short instrs[] = { ICONST, 0, STORE, 1, LOAD, 1, ICONST, 1, IADD, PRINTLN, STORE, 1, LOAD, 1, ICONST, 50, ILT, JMPT, 4, HALT };
  Code * code = code_init(instrs, 2);

  printf("IP: %d\n", vm->instr_ptr);
  vm_run(vm, code, 0);
  printf("IP: %d\n", vm->instr_ptr);
  
  vm_close(vm);
  free(code);
}
