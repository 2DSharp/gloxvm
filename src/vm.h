#ifndef VM_H
#define VM_H

#include "stack.h"
#include "code.h"
#include "includes/vm_struct.h"
#include "includes/bytecode.h"
#include "memory.h"
#include "opcode_runner.h"
#include "includes/opcode.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

VM * vm_init(size_t stack_size, Memory * mem);
void vm_run(VM * vm, Code * code, int debug);
void vm_close(VM * vm);
void vm_exec(VM * vm, const Code * code_mem, const Opcode * opcode);

#endif /* vm.h */
