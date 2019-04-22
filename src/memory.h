#ifndef MEMORY_H
#define MEMORY_H
#include <stdlib.h>

typedef struct memory_t
{
  short * locals;
  unsigned int local_sz;
  short * globals;
  unsigned int global_sz;
} Memory;

Memory * mem_init(unsigned int local_sz, unsigned int global_sz);
#endif
