# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kadochnikov/RK2timp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kadochnikov/RK2timp/build

# Include any dependencies generated for this target.
include CMakeFiles/CompositeExample.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CompositeExample.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CompositeExample.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CompositeExample.dir/flags.make

CMakeFiles/CompositeExample.dir/Composite.cpp.o: CMakeFiles/CompositeExample.dir/flags.make
CMakeFiles/CompositeExample.dir/Composite.cpp.o: ../Composite.cpp
CMakeFiles/CompositeExample.dir/Composite.cpp.o: CMakeFiles/CompositeExample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kadochnikov/RK2timp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CompositeExample.dir/Composite.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CompositeExample.dir/Composite.cpp.o -MF CMakeFiles/CompositeExample.dir/Composite.cpp.o.d -o CMakeFiles/CompositeExample.dir/Composite.cpp.o -c /home/kadochnikov/RK2timp/Composite.cpp

CMakeFiles/CompositeExample.dir/Composite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CompositeExample.dir/Composite.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kadochnikov/RK2timp/Composite.cpp > CMakeFiles/CompositeExample.dir/Composite.cpp.i

CMakeFiles/CompositeExample.dir/Composite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CompositeExample.dir/Composite.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kadochnikov/RK2timp/Composite.cpp -o CMakeFiles/CompositeExample.dir/Composite.cpp.s

# Object files for target CompositeExample
CompositeExample_OBJECTS = \
"CMakeFiles/CompositeExample.dir/Composite.cpp.o"

# External object files for target CompositeExample
CompositeExample_EXTERNAL_OBJECTS =

CompositeExample: CMakeFiles/CompositeExample.dir/Composite.cpp.o
CompositeExample: CMakeFiles/CompositeExample.dir/build.make
CompositeExample: libComposite.so
CompositeExample: CMakeFiles/CompositeExample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kadochnikov/RK2timp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CompositeExample"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CompositeExample.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CompositeExample.dir/build: CompositeExample
.PHONY : CMakeFiles/CompositeExample.dir/build

CMakeFiles/CompositeExample.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CompositeExample.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CompositeExample.dir/clean

CMakeFiles/CompositeExample.dir/depend:
	cd /home/kadochnikov/RK2timp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kadochnikov/RK2timp /home/kadochnikov/RK2timp /home/kadochnikov/RK2timp/build /home/kadochnikov/RK2timp/build /home/kadochnikov/RK2timp/build/CMakeFiles/CompositeExample.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CompositeExample.dir/depend

