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
CMAKE_SOURCE_DIR = /media/Seagate/tridentu_cpp_apps/QuarryDB

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/Seagate/tridentu_cpp_apps/QuarryDB/build

# Utility rule file for quarrydb_autogen.

# Include the progress variables for this target.
include src/CMakeFiles/quarrydb_autogen.dir/progress.make

src/CMakeFiles/quarrydb_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/media/Seagate/tridentu_cpp_apps/QuarryDB/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target quarrydb"
	cd /media/Seagate/tridentu_cpp_apps/QuarryDB/build/src && /usr/bin/cmake -E cmake_autogen /media/Seagate/tridentu_cpp_apps/QuarryDB/build/src/CMakeFiles/quarrydb_autogen.dir/AutogenInfo.json Debug

quarrydb_autogen: src/CMakeFiles/quarrydb_autogen
quarrydb_autogen: src/CMakeFiles/quarrydb_autogen.dir/build.make

.PHONY : quarrydb_autogen

# Rule to build all files generated by this target.
src/CMakeFiles/quarrydb_autogen.dir/build: quarrydb_autogen

.PHONY : src/CMakeFiles/quarrydb_autogen.dir/build

src/CMakeFiles/quarrydb_autogen.dir/clean:
	cd /media/Seagate/tridentu_cpp_apps/QuarryDB/build/src && $(CMAKE_COMMAND) -P CMakeFiles/quarrydb_autogen.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/quarrydb_autogen.dir/clean

src/CMakeFiles/quarrydb_autogen.dir/depend:
	cd /media/Seagate/tridentu_cpp_apps/QuarryDB/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/Seagate/tridentu_cpp_apps/QuarryDB /media/Seagate/tridentu_cpp_apps/QuarryDB/src /media/Seagate/tridentu_cpp_apps/QuarryDB/build /media/Seagate/tridentu_cpp_apps/QuarryDB/build/src /media/Seagate/tridentu_cpp_apps/QuarryDB/build/src/CMakeFiles/quarrydb_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/quarrydb_autogen.dir/depend

