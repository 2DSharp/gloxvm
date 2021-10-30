cmake_minimum_required(VERSION 3.16)
project(glox2 C)

set(CMAKE_C_STANDARD 11)
include_directories(lib/flatcc/include)
add_subdirectory(lib/flatcc)
add_executable(glox2 src/glox.c src/vm.c src/code.c src/exec.c src/memory.c src/stack.c)

target_link_libraries(glox2 PRIVATE flatccrt)