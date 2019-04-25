#include <stdio.h>
#include <stdint.h>

#include "stack.h"
#include "memory.h"
#include "vm.h"
#include "code.h"

#define F_MAIN 0
#define F_ADD 1

int main(int argc, char **argv )
{
  VM * vm;
  uint32_t stack_size = 1024;
  
  if (argc > 1) {
    stack_size = atoi(argv[1]);
  }

  Memory * mem = mem_init(4096, 1024);
  
  vm = vm_init(stack_size, mem);

  /* short instrs[] = { ICONST, 0,
		     STORE, 1,
		     LOAD, 1,
		     ICONST, 1,
		     IADD,
		     PRINT,
		     STORE, 1,
		     LOAD, 1,
		     ICONST, 50,
		     ILT,
		     JMPT, 4,
		     HALT };
  */

  short instrs[] = {LOAD, 0, //int add(x, y) {
		    LOAD, 1,
		    IADD,    
		    STORE, 2, // c = x + y
		    LOAD, 2,   // return c
		    RET,
		    // void main() {
		    ICONST, 10,
		    ICONST, 17,
		    CALL, 1, // add(10, 17)
		    PRINTLN, // print add(10, 17)
		    HALT };


  Code * code = code_init(instrs, 2);

  Function f_main;
  f_main.addr = 10;
  f_main.locals = 0;
  f_main.n_args = 0;
  f_main.return_type = 0;

  Function add;
  add.addr = 0;
  add.locals = 3;
  add.n_args = 2;
  add.return_type = 1;

  Function func_pool[2];
  func_pool[F_MAIN] = f_main;
  func_pool[F_ADD] = add;
  
  //printf("IP: %d\n", vm->instr_ptr);
  vm_run(vm, code, func_pool, F_MAIN, 1);
  //printf("IP: %d\n", vm->instr_ptr);
  
  vm_close(vm);
  free(code);
  mem_flush(mem);
}
