#include <stdio.h>
#include <stdint.h>
//#include "flatcc/support/elapsed.h"
//#include "flatcc/flatcc_prologue.h"
//#include "flatcc/flatcc_flatbuffers.h"
#include "serialization_schema_builder.h"
#include "stack.h"
#include "memory.h"
#include "vm.h"
#include "code.h"


#undef ns
#define ns(x) FLATBUFFERS_WRAP_NAMESPACE(Gloxvm, x)
// A helper to simplify creating vectors from C-arrays.
#define c_vec_len(V) (sizeof(V)/sizeof((V)[0]))

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

  Bytecode fib2[] = {
		     {OPRND, &(short){ ICONST }}, {FLOAT, &(short){ 20 }},
		     {OPRND, &(short){ PRINTLN }},
		     {OPRND, &(short){ HALT }}

  };
 

  // for (int i = 0; i < sizeof(fib2)/sizeof(Bytecode); i++) {
  // printf("String %s", (char *)fib2[i].val);
  //}
 
  /*
  //  Bytecode fib[] = {
    // int fib(n)
  //		 {OPRND, ICONST}, 20, 
  //CALL, F_FIB,
  //PRINTLN,
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
  */
  Code * code = code_init(fib2, 2);

  FILE * out;

  out = fopen("fib.glxc", "wb");
  if (out == NULL) {
    return 1;
  }

  fwrite(code, sizeof(Code), 1, out);
  
  Function f_main;
  f_main.addr = 0;
  f_main.locals = 0;
  f_main.n_args = 0;
  f_main.return_type = 0;
  /*
  Function add;
  add.addr = 0;
  add.locals = 3;
  add.n_args = 2;
  add.return_type = 1;
  */
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

  void* buffer;
  size_t size;
  
  flatcc_builder_t builder, *B;
  B = &builder;
  // Initialize the builder object.
  flatcc_builder_init(B);
  Gloxvm_Module_start_as_root(B);
  /*
  flatbuffers_string_ref_t weapon_one_name = flatbuffers_string_create_str(B, "Sword");
  uint16_t weapon_one_damage = 3;

  flatbuffers_string_ref_t weapon_two_name = flatbuffers_string_create_str(B, "Axe");
  uint16_t weapon_two_damage = 5;

  ns(Weapon_ref_t) sword = ns(Weapon_create(B, weapon_one_name, weapon_one_damage));
  */
  
  // Allocate and extract a readable buffer from internal builder heap.
  // The returned buffer must be deallocated using `free`.
  // NOTE: Finalizing the buffer does NOT change the builder, it
  // just creates a snapshot of the builder content.

  ns(Any_union_ref_t) instruction = Gloxvm_Any_as_Short(ns(Short_create(B, 12)));
  Gloxvm_Module_table_t module = Gloxvm_Module_as_root(B);
  ns(Bytecode_ref_t) bytecode = ns(Bytecode_create(B, 1, instruction));
  Gloxvm_Module_code_add(B, bytecode);
  buffer = flatcc_builder_finalize_aligned_buffer(B, &size);
  
  // use buf
  //printf("%d", buffer);
  FILE *write_ptr;

  write_ptr = fopen("test2.bin","wb");  // w for write, b for binary
  if (write_ptr == NULL) {
    return 1;
  }
  printf("%d", (buffer));
  fwrite(buffer,sizeof(buffer),1,write_ptr); // write 10 bytes from our buffer
  Gloxvm_Module_end_as_root(B);
  //free(buffer);
  //free(buffer);
  //  flatcc_builder_reset(B);
  
  flatcc_builder_clear(B);
  //hellos
  return 0;
}
