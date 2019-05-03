#include <stdio.h>
#include <stdint.h>

#include "stack.h"
#include "memory.h"
#include "vm.h"
#include "code.h"

#define F_MAIN 0
#define F_ADD 1
#define F_FIB 1

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

  /*
  short instrs[] = {LOAD, 0, //int add(x, y) {
		    LOAD, 1,
		    IADD,    
		    STORE, 2, // c = x + y
		    LOAD, 2,   // return c
		    RET,
		    // void main() {
		    ICONST, 10,
		    STORE, 0,
		    ICONST, 17,
		    STORE, 1,
		    LOAD, 0,
		    LOAD, 1,
		    CALL, 1, // add(10, 17)
		    PRINTLN, // print add(10, 17)
		    HALT };

  */

  short fib[] = {
    // int fib(n)
    ICONST, 20, 
    CALL, F_FIB,
    PRINTLN,
    HALT,
    LOAD, 0, 
    ICONST, 2,
    ILT, // if (n < 2) / n <= 1 goto 10
    JMPT, 29,
    LOAD, 0, // n
    ICONST, 1, 
    ISUB, // n - 1
    CALL, F_FIB, // fib(n - 1)
    LOAD, 0, // n
    ICONST, 2,
    ISUB, // n - 2
    CALL, F_FIB, // fib(n-2)
    IADD, // fib(n-1) + fib(n-2) Line: 23
    RET,
    LOAD, 0, // else return n
    RET,
  };

  Code * code = code_init(fib, 2);

  Function f_main;
  f_main.addr = 0;
  f_main.locals = 0;
  f_main.n_args = 0;
  f_main.return_type = 0;

  Function add;
  add.addr = 0;
  add.locals = 3;
  add.n_args = 2;
  add.return_type = 1;

  Function f_fib;
  f_fib.addr = 6;
  f_fib.locals = 1;
  f_fib.n_args = 1;
  f_fib.return_type = 1;
  
  Function func_pool[2];
  func_pool[F_MAIN] = f_main;
  func_pool[F_FIB] = f_fib;
  
  //printf("IP: %d\n", vm->instr_ptr);
  vm_run(vm, code, func_pool, F_MAIN, 0);
  //printf("IP: %d\n", vm->instr_ptr);
  
  vm_close(vm);
  free(code);
  mem_flush(mem);
}
