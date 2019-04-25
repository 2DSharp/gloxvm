#ifndef FUNCTION_H
#define FUNCTION_H

typedef struct fn_t {
  int locals;
  int n_args;
  short addr;
  int return_type;
} Function;

#endif
