#include "memory.h"
#include <stdio.h>

Memory * mem_init(unsigned int local_sz, unsigned int global_sz)
{
  Memory * mem = malloc(sizeof(Memory));
  mem->global_sz = local_sz;
  mem->local_sz = global_sz;
  mem->frame_ptr = 0;
  
  mem->locals = malloc(local_sz * sizeof(short));
  for (int i = 0; i < local_sz; i++) {
    mem->locals[i] = 0;
  };
  return mem;
}
void mem_flush(Memory * mem)
{
  free(mem->locals);
  free(mem);
}
