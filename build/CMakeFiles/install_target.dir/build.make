# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/trevorcox/Zengon

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/trevorcox/Zengon/build

# Utility rule file for install_target.

# Include any custom commands dependencies for this target.
include CMakeFiles/install_target.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/install_target.dir/progress.make

CMakeFiles/install_target:
	/usr/bin/cmake -E make_directory /home/trevorcox/Zengon/build/build && /usr/bin/cmake -E copy /home/trevorcox/Zengon/build/zengon /home/trevorcox/Zengon/build/build/zengon

install_target: CMakeFiles/install_target
install_target: CMakeFiles/install_target.dir/build.make
.PHONY : install_target

# Rule to build all files generated by this target.
CMakeFiles/install_target.dir/build: install_target
.PHONY : CMakeFiles/install_target.dir/build

CMakeFiles/install_target.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/install_target.dir/cmake_clean.cmake
.PHONY : CMakeFiles/install_target.dir/clean

CMakeFiles/install_target.dir/depend:
	cd /home/trevorcox/Zengon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/trevorcox/Zengon /home/trevorcox/Zengon /home/trevorcox/Zengon/build /home/trevorcox/Zengon/build /home/trevorcox/Zengon/build/CMakeFiles/install_target.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/install_target.dir/depend
