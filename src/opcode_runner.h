#ifndef OPCODE_RUNNER_H
#define OPCODE_RUNNER_H

#include "stack.h"
#include "bytecode.h"
#include "code.h"

#include <stdio.h>
typedef int (* opcode_runner)(Code *, Stack *, int);

int exec_nop(Code *, Stack * stack, int ip);
int exec_iadd(Code *, Stack * stack, int ip);
int exec_isub(Code *, Stack * stack, int ip);
int exec_imul(Code *, Stack * stack, int ip);
int exec_idiv(Code *, Stack * stack, int ip);
int exec_iconst(Code *, Stack * stack, int ip);
int exec_print(Code *, Stack * stack, int ip);

void opcode_runner_init(opcode_runner * ops);

#endif
