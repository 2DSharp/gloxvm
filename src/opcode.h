#ifndef OPCODE_H
#define OPCODE_H
#include "stack.h"
#include "code.h"
#include "memory.h"

typedef void (* op_none)(void);
typedef void (* op_noargs)(Stack * stack);
typedef short (* op_args)(Stack * stack, const Code * code, short ip);
typedef short (* op_ujmp)(const Code *, short ip);
typedef void (* op_mem)(Stack * stack, const Code * code, short ip, Memory * mem);

typedef enum op_type {
  NONE,
  NOARGS,
  WITH_ARGS,
  UNCONDITIONAL_BRANCH,
  CONDITIONAL_BRANCH,
  MEMORY_HANDLER,
  INVALID
} OpType;

typedef struct opcode_t
{
  short opcode;
  OpType type;
  union {
    op_none exec_none;
    op_noargs exec_noargs;
    op_args exec_args;
    op_ujmp exec_ujmp;
    //op_cjmp exec_cjmp;
    op_mem exec_mem;
  };
} Opcode;

#endif
