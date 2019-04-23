#ifndef CODE_H
#define CODE_H

#include <stdlib.h>

typedef struct code_t
{
  size_t size;
  short * contents;
} Code;

Code * code_init(short * contents, size_t size);
short code_fetch(const Code * code, int index);

#endif
