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

$(TARGET): $(TARGET).c stack.o vm.o
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c stack.o vm.o

stack.o: stack.c stack.h
	$(CC) $(CFLAGS) -c stack.c

vm.o: vm.c vm.h
	$(CC) $(CFLAGS) -c vm.c
clean:
	$(RM) $(TARGET)
