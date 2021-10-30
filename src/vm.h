#ifndef VM_H
#define VM_H

#include "stack.h"
#include "code.h"
#include "includes/vm_struct.h"
#include "includes/bytecode.h"
#include "memory.h"
#include "exec.h"
#include "includes/opcode.h"
#include "includes/function.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

VM * vm_init(size_t stack_size, Memory * mem);
void vm_run(VM * vm, Code * code_mem, const Function * func_pool, int func_index, int debug);
void vm_close(VM * vm);
void vm_exec(VM * vm, const Code * code_mem, const Opcode * opcode, const Function * func_pool, int * func_index);
short __get_code(Bytecode code);

#endif /* vm.h */
