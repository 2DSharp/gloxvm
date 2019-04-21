#ifndef CODE_H
#define CODE_H

#include <stdlib.h>

typedef struct code_t
{
  size_t size;
  short * contents;
} Code;

inline short code_fetch(Code * code, int index) { return code->contents[index]; }

#endif
