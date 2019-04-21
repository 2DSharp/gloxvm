#ifndef OPCODE_RUNNER_H
#define OPCODE_RUNNER_H

#include "stack.h"
#include "bytecode.h"

#include <stdio.h>
typedef int (* opcode_runner)(Stack *, int);

int op_nop(Stack * stack, int ip);
void opcode_runner_init(opcode_runner * ops);

#endif
