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
include lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/depend.make

# Include the progress variables for this target.
include lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/progress.make

# Include the compile flags for this target's objects.
include lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/flags.make

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/test_json.c.o: lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/flags.make
lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/test_json.c.o: ../lib/flatcc/test/json_test/test_json.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/x/Projects/glox2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/test_json.c.o"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/json_test_uql.dir/test_json.c.o   -c /mnt/x/Projects/glox2/lib/flatcc/test/json_test/test_json.c

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/test_json.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/json_test_uql.dir/test_json.c.i"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/x/Projects/glox2/lib/flatcc/test/json_test/test_json.c > CMakeFiles/json_test_uql.dir/test_json.c.i

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/test_json.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/json_test_uql.dir/test_json.c.s"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/x/Projects/glox2/lib/flatcc/test/json_test/test_json.c -o CMakeFiles/json_test_uql.dir/test_json.c.s

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/builder.c.o: lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/flags.make
lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/builder.c.o: ../lib/flatcc/src/runtime/builder.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/x/Projects/glox2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/builder.c.o"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/json_test_uql.dir/__/__/src/runtime/builder.c.o   -c /mnt/x/Projects/glox2/lib/flatcc/src/runtime/builder.c

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/builder.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/json_test_uql.dir/__/__/src/runtime/builder.c.i"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/x/Projects/glox2/lib/flatcc/src/runtime/builder.c > CMakeFiles/json_test_uql.dir/__/__/src/runtime/builder.c.i

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/builder.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/json_test_uql.dir/__/__/src/runtime/builder.c.s"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/x/Projects/glox2/lib/flatcc/src/runtime/builder.c -o CMakeFiles/json_test_uql.dir/__/__/src/runtime/builder.c.s

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/emitter.c.o: lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/flags.make
lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/emitter.c.o: ../lib/flatcc/src/runtime/emitter.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/x/Projects/glox2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/emitter.c.o"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/json_test_uql.dir/__/__/src/runtime/emitter.c.o   -c /mnt/x/Projects/glox2/lib/flatcc/src/runtime/emitter.c

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/emitter.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/json_test_uql.dir/__/__/src/runtime/emitter.c.i"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/x/Projects/glox2/lib/flatcc/src/runtime/emitter.c > CMakeFiles/json_test_uql.dir/__/__/src/runtime/emitter.c.i

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/emitter.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/json_test_uql.dir/__/__/src/runtime/emitter.c.s"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/x/Projects/glox2/lib/flatcc/src/runtime/emitter.c -o CMakeFiles/json_test_uql.dir/__/__/src/runtime/emitter.c.s

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/refmap.c.o: lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/flags.make
lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/refmap.c.o: ../lib/flatcc/src/runtime/refmap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/x/Projects/glox2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/refmap.c.o"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/json_test_uql.dir/__/__/src/runtime/refmap.c.o   -c /mnt/x/Projects/glox2/lib/flatcc/src/runtime/refmap.c

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/refmap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/json_test_uql.dir/__/__/src/runtime/refmap.c.i"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/x/Projects/glox2/lib/flatcc/src/runtime/refmap.c > CMakeFiles/json_test_uql.dir/__/__/src/runtime/refmap.c.i

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/refmap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/json_test_uql.dir/__/__/src/runtime/refmap.c.s"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/x/Projects/glox2/lib/flatcc/src/runtime/refmap.c -o CMakeFiles/json_test_uql.dir/__/__/src/runtime/refmap.c.s

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/verifier.c.o: lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/flags.make
lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/verifier.c.o: ../lib/flatcc/src/runtime/verifier.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/x/Projects/glox2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/verifier.c.o"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/json_test_uql.dir/__/__/src/runtime/verifier.c.o   -c /mnt/x/Projects/glox2/lib/flatcc/src/runtime/verifier.c

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/verifier.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/json_test_uql.dir/__/__/src/runtime/verifier.c.i"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/x/Projects/glox2/lib/flatcc/src/runtime/verifier.c > CMakeFiles/json_test_uql.dir/__/__/src/runtime/verifier.c.i

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/verifier.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/json_test_uql.dir/__/__/src/runtime/verifier.c.s"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/x/Projects/glox2/lib/flatcc/src/runtime/verifier.c -o CMakeFiles/json_test_uql.dir/__/__/src/runtime/verifier.c.s

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_parser.c.o: lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/flags.make
lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_parser.c.o: ../lib/flatcc/src/runtime/json_parser.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/x/Projects/glox2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_parser.c.o"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_parser.c.o   -c /mnt/x/Projects/glox2/lib/flatcc/src/runtime/json_parser.c

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_parser.c.i"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/x/Projects/glox2/lib/flatcc/src/runtime/json_parser.c > CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_parser.c.i

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_parser.c.s"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/x/Projects/glox2/lib/flatcc/src/runtime/json_parser.c -o CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_parser.c.s

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_printer.c.o: lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/flags.make
lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_printer.c.o: ../lib/flatcc/src/runtime/json_printer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/x/Projects/glox2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_printer.c.o"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_printer.c.o   -c /mnt/x/Projects/glox2/lib/flatcc/src/runtime/json_printer.c

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_printer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_printer.c.i"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/x/Projects/glox2/lib/flatcc/src/runtime/json_printer.c > CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_printer.c.i

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_printer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_printer.c.s"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/x/Projects/glox2/lib/flatcc/src/runtime/json_printer.c -o CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_printer.c.s

# Object files for target json_test_uql
json_test_uql_OBJECTS = \
"CMakeFiles/json_test_uql.dir/test_json.c.o" \
"CMakeFiles/json_test_uql.dir/__/__/src/runtime/builder.c.o" \
"CMakeFiles/json_test_uql.dir/__/__/src/runtime/emitter.c.o" \
"CMakeFiles/json_test_uql.dir/__/__/src/runtime/refmap.c.o" \
"CMakeFiles/json_test_uql.dir/__/__/src/runtime/verifier.c.o" \
"CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_parser.c.o" \
"CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_printer.c.o"

# External object files for target json_test_uql
json_test_uql_EXTERNAL_OBJECTS =

lib/flatcc/test/json_test/json_test_uql: lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/test_json.c.o
lib/flatcc/test/json_test/json_test_uql: lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/builder.c.o
lib/flatcc/test/json_test/json_test_uql: lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/emitter.c.o
lib/flatcc/test/json_test/json_test_uql: lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/refmap.c.o
lib/flatcc/test/json_test/json_test_uql: lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/verifier.c.o
lib/flatcc/test/json_test/json_test_uql: lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_parser.c.o
lib/flatcc/test/json_test/json_test_uql: lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/__/__/src/runtime/json_printer.c.o
lib/flatcc/test/json_test/json_test_uql: lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/build.make
lib/flatcc/test/json_test/json_test_uql: lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/x/Projects/glox2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C executable json_test_uql"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/json_test_uql.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/build: lib/flatcc/test/json_test/json_test_uql

.PHONY : lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/build

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/clean:
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test && $(CMAKE_COMMAND) -P CMakeFiles/json_test_uql.dir/cmake_clean.cmake
.PHONY : lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/clean

lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/depend:
	cd /mnt/x/Projects/glox2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/x/Projects/glox2 /mnt/x/Projects/glox2/lib/flatcc/test/json_test /mnt/x/Projects/glox2/cmake-build-debug /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/flatcc/test/json_test/CMakeFiles/json_test_uql.dir/depend

