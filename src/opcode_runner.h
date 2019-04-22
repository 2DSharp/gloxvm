#ifndef OPCODE_RUNNER_H
#define OPCODE_RUNNER_H

#include "vm_struct.h"
#include "bytecode.h"
#include "code.h"

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef void (* opcode_runner)(Code *, VM * vm);

void exec_nop(Code *, VM * vm);
void exec_iadd(Code *, VM * vm);
void exec_isub(Code *, VM * vm);
void exec_imul(Code *, VM * vm);
void exec_idiv(Code *, VM * vm);
void exec_iconst(Code *, VM * vm);
void exec_print(Code *, VM * vm);
void exec_println(Code * code, VM * vm);
void exec_load(Code *, VM * vm);
void exec_store(Code *, VM * vm);
void exec_jmp(Code * code, VM * vm);
void exec_jmpt(Code * code, VM * vm);
void exec_ilt(Code * code, VM * vm);
void exec_ieq(Code * code, VM * vm);

void opcode_runner_init(opcode_runner * ops);

#endif
