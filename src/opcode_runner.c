#include "opcode_runner.h"

int op_nop(Stack * stack, int ip)
{
  return ++ip;
}
void opcode_runner_init(opcode_runner * ops)
{
  ops[NOP] = op_nop;
}
