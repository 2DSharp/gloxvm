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
include lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/depend.make

# Include the progress variables for this target.
include lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/progress.make

# Include the compile flags for this target's objects.
include lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/flags.make

lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/monster_test.cpp.o: lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/flags.make
lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/monster_test.cpp.o: ../lib/flatcc/test/monster_test_cpp/monster_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/x/Projects/glox2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/monster_test.cpp.o"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/monster_test_cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/monster_test_cpp.dir/monster_test.cpp.o -c /mnt/x/Projects/glox2/lib/flatcc/test/monster_test_cpp/monster_test.cpp

lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/monster_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/monster_test_cpp.dir/monster_test.cpp.i"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/monster_test_cpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/x/Projects/glox2/lib/flatcc/test/monster_test_cpp/monster_test.cpp > CMakeFiles/monster_test_cpp.dir/monster_test.cpp.i

lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/monster_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/monster_test_cpp.dir/monster_test.cpp.s"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/monster_test_cpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/x/Projects/glox2/lib/flatcc/test/monster_test_cpp/monster_test.cpp -o CMakeFiles/monster_test_cpp.dir/monster_test.cpp.s

# Object files for target monster_test_cpp
monster_test_cpp_OBJECTS = \
"CMakeFiles/monster_test_cpp.dir/monster_test.cpp.o"

# External object files for target monster_test_cpp
monster_test_cpp_EXTERNAL_OBJECTS =

lib/flatcc/test/monster_test_cpp/monster_test_cpp: lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/monster_test.cpp.o
lib/flatcc/test/monster_test_cpp/monster_test_cpp: lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/build.make
lib/flatcc/test/monster_test_cpp/monster_test_cpp: ../lib/flatcc/lib/libflatccrt.a
lib/flatcc/test/monster_test_cpp/monster_test_cpp: lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/x/Projects/glox2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable monster_test_cpp"
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/monster_test_cpp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/monster_test_cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/build: lib/flatcc/test/monster_test_cpp/monster_test_cpp

.PHONY : lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/build

lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/clean:
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/monster_test_cpp && $(CMAKE_COMMAND) -P CMakeFiles/monster_test_cpp.dir/cmake_clean.cmake
.PHONY : lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/clean

lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/depend:
	cd /mnt/x/Projects/glox2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/x/Projects/glox2 /mnt/x/Projects/glox2/lib/flatcc/test/monster_test_cpp /mnt/x/Projects/glox2/cmake-build-debug /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/monster_test_cpp /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/flatcc/test/monster_test_cpp/CMakeFiles/monster_test_cpp.dir/depend

