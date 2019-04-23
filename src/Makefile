# the compiler: gcc for C program, define as g++ for C++
CC = gcc
# compiler flags:
# -g adds debugging information to the executable file
# -Wall turns on most, but not all, compiler warnings
CFLAGS = -g -Wall
CPPFLAGS=
LDFLAGS=
#LIBS
# the build target executable:
TARGET = glox
all: $(TARGET)

$(TARGET): stack.o code.o vm.o opcode_runner.o memory.o

stack.o: stack.h
memory.o: memory.h
opcode_runner.o: opcode_runner.h
vm.o: vm.h
code.o: code.h

clean:
	$(RM) -f $(TARGET) *.o
