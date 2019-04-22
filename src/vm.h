#ifndef VM_H
#define VM_H

#include "stack.h"
#include "code.h"
#include "vm_struct.h"
#include "bytecode.h"
#include "opcode_runner.h"
#include "memory.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

VM * vm_init(size_t stack_size, Memory * mem);
void vm_run(VM * vm, Code * code, int debug);
void vm_close(VM * vm);
void vm_fetch();
void vm_decode();


#endif /* vm.h */
