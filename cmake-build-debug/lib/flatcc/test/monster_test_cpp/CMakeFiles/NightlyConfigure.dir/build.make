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

# Utility rule file for NightlyConfigure.

# Include the progress variables for this target.
include lib/flatcc/test/monster_test_cpp/CMakeFiles/NightlyConfigure.dir/progress.make

lib/flatcc/test/monster_test_cpp/CMakeFiles/NightlyConfigure:
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/monster_test_cpp && /usr/bin/ctest -D NightlyConfigure

NightlyConfigure: lib/flatcc/test/monster_test_cpp/CMakeFiles/NightlyConfigure
NightlyConfigure: lib/flatcc/test/monster_test_cpp/CMakeFiles/NightlyConfigure.dir/build.make

.PHONY : NightlyConfigure

# Rule to build all files generated by this target.
lib/flatcc/test/monster_test_cpp/CMakeFiles/NightlyConfigure.dir/build: NightlyConfigure

.PHONY : lib/flatcc/test/monster_test_cpp/CMakeFiles/NightlyConfigure.dir/build

lib/flatcc/test/monster_test_cpp/CMakeFiles/NightlyConfigure.dir/clean:
	cd /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/monster_test_cpp && $(CMAKE_COMMAND) -P CMakeFiles/NightlyConfigure.dir/cmake_clean.cmake
.PHONY : lib/flatcc/test/monster_test_cpp/CMakeFiles/NightlyConfigure.dir/clean

lib/flatcc/test/monster_test_cpp/CMakeFiles/NightlyConfigure.dir/depend:
	cd /mnt/x/Projects/glox2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/x/Projects/glox2 /mnt/x/Projects/glox2/lib/flatcc/test/monster_test_cpp /mnt/x/Projects/glox2/cmake-build-debug /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/monster_test_cpp /mnt/x/Projects/glox2/cmake-build-debug/lib/flatcc/test/monster_test_cpp/CMakeFiles/NightlyConfigure.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/flatcc/test/monster_test_cpp/CMakeFiles/NightlyConfigure.dir/depend

