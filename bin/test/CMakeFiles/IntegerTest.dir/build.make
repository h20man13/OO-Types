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
include bin/test/CMakeFiles/IntegerTest.dir/depend.make

# Include the progress variables for this target.
include bin/test/CMakeFiles/IntegerTest.dir/progress.make

# Include the compile flags for this target's objects.
include bin/test/CMakeFiles/IntegerTest.dir/flags.make

bin/test/CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.o: bin/test/CMakeFiles/IntegerTest.dir/flags.make
bin/test/CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.o: test/IntegerTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacob/Desktop/OO-Types/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object bin/test/CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.o"
	cd /home/jacob/Desktop/OO-Types/bin/test && /usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.o -c /home/jacob/Desktop/OO-Types/test/IntegerTest.cpp

bin/test/CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.i"
	cd /home/jacob/Desktop/OO-Types/bin/test && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jacob/Desktop/OO-Types/test/IntegerTest.cpp > CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.i

bin/test/CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.s"
	cd /home/jacob/Desktop/OO-Types/bin/test && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jacob/Desktop/OO-Types/test/IntegerTest.cpp -o CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.s

bin/test/CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.o.requires:

.PHONY : bin/test/CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.o.requires

bin/test/CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.o.provides: bin/test/CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.o.requires
	$(MAKE) -f bin/test/CMakeFiles/IntegerTest.dir/build.make bin/test/CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.o.provides.build
.PHONY : bin/test/CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.o.provides

bin/test/CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.o.provides.build: bin/test/CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.o


# Object files for target IntegerTest
IntegerTest_OBJECTS = \
"CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.o"

# External object files for target IntegerTest
IntegerTest_EXTERNAL_OBJECTS =

bin/test/IntegerTest: bin/test/CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.o
bin/test/IntegerTest: bin/test/CMakeFiles/IntegerTest.dir/build.make
bin/test/IntegerTest: libSRCLIB.a
bin/test/IntegerTest: bin/test/CMakeFiles/IntegerTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jacob/Desktop/OO-Types/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable IntegerTest"
	cd /home/jacob/Desktop/OO-Types/bin/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IntegerTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
bin/test/CMakeFiles/IntegerTest.dir/build: bin/test/IntegerTest

.PHONY : bin/test/CMakeFiles/IntegerTest.dir/build

bin/test/CMakeFiles/IntegerTest.dir/requires: bin/test/CMakeFiles/IntegerTest.dir/__/__/test/IntegerTest.cpp.o.requires

.PHONY : bin/test/CMakeFiles/IntegerTest.dir/requires

bin/test/CMakeFiles/IntegerTest.dir/clean:
	cd /home/jacob/Desktop/OO-Types/bin/test && $(CMAKE_COMMAND) -P CMakeFiles/IntegerTest.dir/cmake_clean.cmake
.PHONY : bin/test/CMakeFiles/IntegerTest.dir/clean

bin/test/CMakeFiles/IntegerTest.dir/depend:
	cd /home/jacob/Desktop/OO-Types && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jacob/Desktop/OO-Types /home/jacob/Desktop/OO-Types/bin/test /home/jacob/Desktop/OO-Types /home/jacob/Desktop/OO-Types/bin/test /home/jacob/Desktop/OO-Types/bin/test/CMakeFiles/IntegerTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : bin/test/CMakeFiles/IntegerTest.dir/depend

