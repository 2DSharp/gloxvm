# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/x/Projects/glox2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/x/Projects/glox2/cmake-build-debug

# Utility rule file for test_generated.

# Include the progress variables for this target.
include lib/flatcc/test/cgen_test/CMakeFiles/test_generated.dir/progress.make

lib/flatcc/test/cgen_test/CMakeFiles/test_generated:
	cd /mnt/x/Projects/glox2/cmake-build-debug/test/cgen_test && ./cgen_test > test_generated.c
	cd /mnt/x/Projects/glox2/cmake-build-debug/test/cgen_test && /usr/bin/cc -DFLATCC_REFLECTION=1 -std=c11 -pedantic -Wall -Wextra -Wno-stringop-truncation -Wno-format-overflow -DPORTABLE_POSIX_MEMALIGN=1 -Werror -Wno-unused-function -Wsign-conversion test_generated.c -c -I/mnt/x/Projects/glox2/include

test_generated: lib/flatcc/test/cgen_test/CMakeFiles/test_generated
test_generated: lib/flatcc/test/cgen_test/CMakeFiles/test_generated.dir/build.make

.PHONY : test_generated

# Rule to build all files generated by this target.
lib/flatcc/test/cgen_test/CMakeFiles/test_generated.dir/build: test_generated

.PHONY : lib/flatcc/test/cgen_test/CMakeFiles/test_generated.dir/build

lib/flatcc/test/cgen_test/CMakeFiles/test_generated.dir/clean:
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/cgen_test && $(CMAKE_COMMAND) -P CMakeFiles/test_generated.dir/cmake_clean.cmake
.PHONY : lib/flatcc/test/cgen_test/CMakeFiles/test_generated.dir/clean

lib/flatcc/test/cgen_test/CMakeFiles/test_generated.dir/depend:
	cd /mnt/x/Projects/glox2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/x/Projects/glox2 /mnt/x/Projects/glox2/lib/flatcc/test/cgen_test /mnt/x/Projects/glox2/cmake-build-debug /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/cgen_test /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/cgen_test/CMakeFiles/test_generated.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/flatcc/test/cgen_test/CMakeFiles/test_generated.dir/depend

