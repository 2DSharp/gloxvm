#include "memory.h"

Memory * mem_init(unsigned int local_sz, unsigned int global_sz)
{
  Memory * mem = malloc(sizeof(Memory));
  mem->global_sz = local_sz;
  mem->local_sz = global_sz;

  short locals[local_sz];
  for (int i = 0; i < local_sz; i++) {
    locals[i] = 0;
  };
  mem->locals = locals;
  return mem;
}
