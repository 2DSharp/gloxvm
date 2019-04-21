#include "code.h"

Code * code_init(short * contents, size_t size)
{
  Code * code = malloc(sizeof(Code));
  code->size = size;
  code->contents = contents;

  return code;
}
short code_fetch(Code * code, int index)
{
  return code->contents[index];
}
