#ifndef MEMORY_H
#define MEMORY_H

typedef struct memory_t
{
  short * locals;
  unsigned int local_sz;
  short * globals;
  unsigned int global_sz;
} Memory;

#endif
