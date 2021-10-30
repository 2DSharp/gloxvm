#ifndef CODE_H
#define CODE_H

#include <stdlib.h>
#include "includes/bytecode.h"
typedef struct code_t
{
  size_t size;
  Bytecode * contents;
} Code;

Code * code_init(Bytecode * contents, size_t size);
Bytecode code_fetch(const Code * code, int index);

#endif
