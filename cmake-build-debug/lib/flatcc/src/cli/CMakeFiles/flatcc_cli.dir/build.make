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
include lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/depend.make

# Include the progress variables for this target.
include lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/progress.make

# Include the compile flags for this target's objects.
include lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/flags.make

lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/flatcc_cli.c.o: lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/flags.make
lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/flatcc_cli.c.o: ../lib/flatcc/src/cli/flatcc_cli.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/x/Projects/glox2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/flatcc_cli.c.o"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/src/cli && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/flatcc_cli.dir/flatcc_cli.c.o   -c /mnt/x/Projects/glox2/lib/flatcc/src/cli/flatcc_cli.c

lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/flatcc_cli.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/flatcc_cli.dir/flatcc_cli.c.i"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/src/cli && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/x/Projects/glox2/lib/flatcc/src/cli/flatcc_cli.c > CMakeFiles/flatcc_cli.dir/flatcc_cli.c.i

lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/flatcc_cli.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/flatcc_cli.dir/flatcc_cli.c.s"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/src/cli && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/x/Projects/glox2/lib/flatcc/src/cli/flatcc_cli.c -o CMakeFiles/flatcc_cli.dir/flatcc_cli.c.s

# Object files for target flatcc_cli
flatcc_cli_OBJECTS = \
"CMakeFiles/flatcc_cli.dir/flatcc_cli.c.o"

# External object files for target flatcc_cli
flatcc_cli_EXTERNAL_OBJECTS =

../lib/flatcc/bin/flatcc: lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/flatcc_cli.c.o
../lib/flatcc/bin/flatcc: lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/build.make
../lib/flatcc/bin/flatcc: ../lib/flatcc/lib/libflatcc.a
../lib/flatcc/bin/flatcc: lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/x/Projects/glox2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ../../../../../lib/flatcc/bin/flatcc"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/src/cli && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/flatcc_cli.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/build: ../lib/flatcc/bin/flatcc

.PHONY : lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/build

lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/clean:
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/src/cli && $(CMAKE_COMMAND) -P CMakeFiles/flatcc_cli.dir/cmake_clean.cmake
.PHONY : lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/clean

lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/depend:
	cd /mnt/x/Projects/glox2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/x/Projects/glox2 /mnt/x/Projects/glox2/lib/flatcc/src/cli /mnt/x/Projects/glox2/cmake-build-debug /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/src/cli /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/flatcc/src/cli/CMakeFiles/flatcc_cli.dir/depend

