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
include lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/depend.make

# Include the progress variables for this target.
include lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/progress.make

# Include the compile flags for this target's objects.
include lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/flags.make

lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/test_json_printer.c.o: lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/flags.make
lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/test_json_printer.c.o: ../lib/flatcc/test/json_test/test_json_printer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/x/Projects/glox2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/test_json_printer.c.o"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_json_printer.dir/test_json_printer.c.o   -c /mnt/x/Projects/glox2/lib/flatcc/test/json_test/test_json_printer.c

lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/test_json_printer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_json_printer.dir/test_json_printer.c.i"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/x/Projects/glox2/lib/flatcc/test/json_test/test_json_printer.c > CMakeFiles/test_json_printer.dir/test_json_printer.c.i

lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/test_json_printer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_json_printer.dir/test_json_printer.c.s"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/x/Projects/glox2/lib/flatcc/test/json_test/test_json_printer.c -o CMakeFiles/test_json_printer.dir/test_json_printer.c.s

# Object files for target test_json_printer
test_json_printer_OBJECTS = \
"CMakeFiles/test_json_printer.dir/test_json_printer.c.o"

# External object files for target test_json_printer
test_json_printer_EXTERNAL_OBJECTS =

lib/flatcc/test/json_test/test_json_printer: lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/test_json_printer.c.o
lib/flatcc/test/json_test/test_json_printer: lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/build.make
lib/flatcc/test/json_test/test_json_printer: ../lib/flatcc/lib/libflatccrt.a
lib/flatcc/test/json_test/test_json_printer: lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/x/Projects/glox2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test_json_printer"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_json_printer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/build: lib/flatcc/test/json_test/test_json_printer

.PHONY : lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/build

lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/clean:
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && $(CMAKE_COMMAND) -P CMakeFiles/test_json_printer.dir/cmake_clean.cmake
.PHONY : lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/clean

lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/depend:
	cd /mnt/x/Projects/glox2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/x/Projects/glox2 /mnt/x/Projects/glox2/lib/flatcc/test/json_test /mnt/x/Projects/glox2/cmake-build-debug /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/flatcc/test/json_test/CMakeFiles/test_json_printer.dir/depend

