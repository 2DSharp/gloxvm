#ifndef EXEC_H
#define EXEC_H

#include "includes/vm_struct.h"
#include "includes/bytecode.h"
#include "code.h"
#include "memory.h"
#include "includes/opcode.h"
#include "includes/function.h"

#include <stdio.h>

#define TRUE 1
#define FALSE 0

void exec_nop();
void exec_iadd(Stack * stack);
void exec_isub(Stack * stack);
void exec_imul(Stack * stack);
void exec_idiv(Stack * stack);
short exec_iconst(Stack * stack, const Code * code, short ip);
void exec_print(Stack * stack);
void exec_println(Stack * stack);

short exec_load(Stack * stack, const Code * code, short ip, Memory * mem, short fp);
short exec_store(Stack * stack, const Code * code, short ip, Memory * mem, short fp);

short exec_jmp(const Code * code, short ip);
short exec_jmpt(Stack * stack, const Code * code, short ip);
void exec_ieq(Stack * stack);
void exec_ilt(Stack * stack);
void exec_pop(Stack * stack);
short exec_call(Stack * stack, const Code * code, short ip, Memory * mem, const Function * fn_pool, int * caller_index, short * fp);

void opcode_runner_init(Opcode * ops);

#endif
