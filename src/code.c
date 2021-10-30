#include "code.h"

Code * code_init(Bytecode * contents, size_t size)
{
  Code * code = malloc(sizeof(Code));
  code->size = size;
  code->contents = contents;

  return code;
}
Bytecode code_fetch(const Code * code, int index)
{
  return code->contents[index];
}
