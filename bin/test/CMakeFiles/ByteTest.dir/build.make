# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/jacob/Desktop/OO-Types

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jacob/Desktop/OO-Types

# Include any dependencies generated for this target.
include bin/test/CMakeFiles/ByteTest.dir/depend.make

# Include the progress variables for this target.
include bin/test/CMakeFiles/ByteTest.dir/progress.make

# Include the compile flags for this target's objects.
include bin/test/CMakeFiles/ByteTest.dir/flags.make

bin/test/CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.o: bin/test/CMakeFiles/ByteTest.dir/flags.make
bin/test/CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.o: test/ByteTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacob/Desktop/OO-Types/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object bin/test/CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.o"
	cd /home/jacob/Desktop/OO-Types/bin/test && /usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.o -c /home/jacob/Desktop/OO-Types/test/ByteTest.cpp

bin/test/CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.i"
	cd /home/jacob/Desktop/OO-Types/bin/test && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jacob/Desktop/OO-Types/test/ByteTest.cpp > CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.i

bin/test/CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.s"
	cd /home/jacob/Desktop/OO-Types/bin/test && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jacob/Desktop/OO-Types/test/ByteTest.cpp -o CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.s

bin/test/CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.o.requires:

.PHONY : bin/test/CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.o.requires

bin/test/CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.o.provides: bin/test/CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.o.requires
	$(MAKE) -f bin/test/CMakeFiles/ByteTest.dir/build.make bin/test/CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.o.provides.build
.PHONY : bin/test/CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.o.provides

bin/test/CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.o.provides.build: bin/test/CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.o


# Object files for target ByteTest
ByteTest_OBJECTS = \
"CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.o"

# External object files for target ByteTest
ByteTest_EXTERNAL_OBJECTS =

bin/test/ByteTest: bin/test/CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.o
bin/test/ByteTest: bin/test/CMakeFiles/ByteTest.dir/build.make
bin/test/ByteTest: libOBJTYPES.a
bin/test/ByteTest: bin/test/CMakeFiles/ByteTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jacob/Desktop/OO-Types/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ByteTest"
	cd /home/jacob/Desktop/OO-Types/bin/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ByteTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
bin/test/CMakeFiles/ByteTest.dir/build: bin/test/ByteTest

.PHONY : bin/test/CMakeFiles/ByteTest.dir/build

bin/test/CMakeFiles/ByteTest.dir/requires: bin/test/CMakeFiles/ByteTest.dir/__/__/test/ByteTest.cpp.o.requires

.PHONY : bin/test/CMakeFiles/ByteTest.dir/requires

bin/test/CMakeFiles/ByteTest.dir/clean:
	cd /home/jacob/Desktop/OO-Types/bin/test && $(CMAKE_COMMAND) -P CMakeFiles/ByteTest.dir/cmake_clean.cmake
.PHONY : bin/test/CMakeFiles/ByteTest.dir/clean

bin/test/CMakeFiles/ByteTest.dir/depend:
	cd /home/jacob/Desktop/OO-Types && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jacob/Desktop/OO-Types /home/jacob/Desktop/OO-Types/bin/test /home/jacob/Desktop/OO-Types /home/jacob/Desktop/OO-Types/bin/test /home/jacob/Desktop/OO-Types/bin/test/CMakeFiles/ByteTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : bin/test/CMakeFiles/ByteTest.dir/depend

