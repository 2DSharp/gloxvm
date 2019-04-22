#ifndef BYTECODE_H
#define BYTECODE_H

#define NOP 0u
#define ICONST_1 1u
#define ICONST_2 2u
#define ICONST_3 3u
#define ICONST_4 4u
#define ICONST_5 5u
#define ICONST 6u
#define IADD 7u
#define ISUB 8u
#define IMUL 9u
#define ILT 10u
#define IEQ 11u
#define JMP 12u
#define JMPT 13u
#define JMPF 14u
#define LOAD 15u
#define GLOAD 16u
#define STORE 17u
#define GSTORE 18u
#define PRINT 19u
#define HALT 20u
#define IDIV 21u
#define PRINTLN 22u

#endif /* bytecode.h */
