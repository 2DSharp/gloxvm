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

# Include any dependencies generated for this target.
include lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/depend.make

# Include the progress variables for this target.
include lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/progress.make

# Include the compile flags for this target's objects.
include lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/flags.make

lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/cgen_test.c.o: lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/flags.make
lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/cgen_test.c.o: ../lib/flatcc/test/cgen_test/cgen_test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/x/Projects/glox2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/cgen_test.c.o"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/cgen_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cgen_test.dir/cgen_test.c.o   -c /mnt/x/Projects/glox2/lib/flatcc/test/cgen_test/cgen_test.c

lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/cgen_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cgen_test.dir/cgen_test.c.i"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/cgen_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/x/Projects/glox2/lib/flatcc/test/cgen_test/cgen_test.c > CMakeFiles/cgen_test.dir/cgen_test.c.i

lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/cgen_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cgen_test.dir/cgen_test.c.s"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/cgen_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/x/Projects/glox2/lib/flatcc/test/cgen_test/cgen_test.c -o CMakeFiles/cgen_test.dir/cgen_test.c.s

# Object files for target cgen_test
cgen_test_OBJECTS = \
"CMakeFiles/cgen_test.dir/cgen_test.c.o"

# External object files for target cgen_test
cgen_test_EXTERNAL_OBJECTS =

lib/flatcc/test/cgen_test/cgen_test: lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/cgen_test.c.o
lib/flatcc/test/cgen_test/cgen_test: lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/build.make
lib/flatcc/test/cgen_test/cgen_test: ../lib/flatcc/lib/libflatcc.a
lib/flatcc/test/cgen_test/cgen_test: lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/x/Projects/glox2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cgen_test"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/cgen_test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cgen_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/build: lib/flatcc/test/cgen_test/cgen_test

.PHONY : lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/build

lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/clean:
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/cgen_test && $(CMAKE_COMMAND) -P CMakeFiles/cgen_test.dir/cmake_clean.cmake
.PHONY : lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/clean

lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/depend:
	cd /mnt/x/Projects/glox2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/x/Projects/glox2 /mnt/x/Projects/glox2/lib/flatcc/test/cgen_test /mnt/x/Projects/glox2/cmake-build-debug /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/cgen_test /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/flatcc/test/cgen_test/CMakeFiles/cgen_test.dir/depend
