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

  Code code;
  
  vm_run(code, data);
}
