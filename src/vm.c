#include "vm.h"

VM * vm_init(size_t stack_size, Memory * mem)
{
  VM * vm = (VM*) malloc(sizeof(VM));
  vm->stack = stack_new(stack_size);
  vm->instr_ptr = 0;
  vm->memory = mem;
  vm->state = ST_HALTED;
  return vm;
}

void vm_exec(VM * vm, const Code * code_mem, const Opcode * opcode, const Function * func_pool, int * func_index)
{
  vm->state = ST_RUNNING;
  switch (opcode->type) {
      case NOARGS:
	  opcode->exec_noargs(vm->stack);
	  ++vm->instr_ptr;
	  break;
      case WITH_ARGS:
      case CONDITIONAL_BRANCH:
	  vm->instr_ptr = opcode->exec_args(vm->stack, code_mem, vm->instr_ptr);
	  break;
      case UNCONDITIONAL_BRANCH:
	  vm->instr_ptr = opcode->exec_ujmp(code_mem, vm->instr_ptr);
	  break;
      case MEMORY_HANDLER:
	  vm->instr_ptr = opcode->exec_mem(vm->stack, code_mem, vm->instr_ptr, vm->memory);
	  break;

      case CALLER:
	  vm->instr_ptr = opcode->exec_caller(vm->stack, code_mem, vm->instr_ptr, vm->memory, func_pool, func_index);
	  break;
	  
      case NONE:
	  opcode->exec_none();
	  ++vm->instr_ptr;
	  break;
	  
      default:
	  vm->state = ST_INVALID;
	  return;
  }
}

void vm_run(VM * vm, Code * code_mem, const Function * func_pool, int func_index, int debug)
{
  short code;
  Opcode opcodes[128];
  
  opcode_runner_init(opcodes);
  vm->instr_ptr = func_pool[func_index].addr;
  code = __get_code(code_fetch(code_mem, vm->instr_ptr));

  while (code != HALT && vm->state != ST_INVALID) {
    /** Decode **/
    Opcode opcode = opcodes[code];

    if (debug) {
      //printf("\tTop: %d\n", vm->stack->top);
      printf("IP: %03d\tOpcode: %04d\tFP: %02d ", vm->instr_ptr, code, vm->memory->frame_ptr);
      // print the local memory
      printf(" Mem: [ ");
      for (int i = 0; i < 10; i++) {
	printf("%d ", vm->memory->locals[i]);
      }
      printf(" ] ");
      //printf("fu: %d",func_pool[func_index].n_args);
    }
    /** Execute */
    vm_exec(vm, code_mem, &opcode, func_pool, &func_index);
    code = __get_code(code_fetch(code_mem, vm->instr_ptr));

    if (debug) {
      stack_debug_print(vm->stack);
      printf("\tSP: %d\n", vm->stack->top);
    }
  }
}

void vm_close(VM * vm)
{
  stack_flush(vm->stack);
  free(vm);
}

short __get_code(Bytecode code) {
  return (*(short *) code.val);
}
