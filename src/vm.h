#ifndef VM_H
#define VM_H

#include "stack.h"
#include "code.h"
#include "vm_struct.h"
#include "bytecode.h"
#include "memory.h"
#include "opcode_runner.h"
#include "opcode.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

VM * vm_init(size_t stack_size, Memory * mem);
void vm_run(VM * vm, Code * code, int debug);
void vm_close(VM * vm);
void vm_fetch();
Opcode vm_decode(short opcode);


#endif /* vm.h */
