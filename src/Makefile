# the compiler: gcc for C program, define as g++ for C++
CC = gcc

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall

#LIBS

# the build target executable:
TARGET = glox

all: $(TARGET)

$(TARGET): $(TARGET).c stack.o vm.o code.o
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c stack.o vm.o code.o

stack.o: stack.c stack.h
	$(CC) $(CFLAGS) -c stack.c

opcode_runner.o: opcode_runner.c opcode_runner.h stack.o bytecode.h
	$(CC) $(CFLAGS) -c opcode_runner.c stack.o bytecode.h

vm.o: vm.c vm.h stack.o opcode_runner.o bytecode.h
	$(CC) $(CFLAGS) -c vm.c stack.o opcode_runner.o bytecode.h

code.o: code.c code.h
	$(CC) $(CFLAGS) -c code.c

clean:
	$(RM) $(TARGET)
