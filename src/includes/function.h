#ifndef FUNCTION_H
#define FUNCTION_H

typedef struct fn_t {
  int locals;
  int n_args;
  int addr;
} Function;
#endif
