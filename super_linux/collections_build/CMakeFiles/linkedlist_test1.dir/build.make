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
CMAKE_SOURCE_DIR = /home/tomoharu/myc/super_linux/collections

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tomoharu/myc/super_linux/collections_build

# Include any dependencies generated for this target.
include CMakeFiles/linkedlist_test1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/linkedlist_test1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/linkedlist_test1.dir/flags.make

CMakeFiles/linkedlist_test1.dir/linkedlist_test1.c.o: CMakeFiles/linkedlist_test1.dir/flags.make
CMakeFiles/linkedlist_test1.dir/linkedlist_test1.c.o: /home/tomoharu/myc/super_linux/collections/linkedlist_test1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tomoharu/myc/super_linux/collections_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/linkedlist_test1.dir/linkedlist_test1.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/linkedlist_test1.dir/linkedlist_test1.c.o   -c /home/tomoharu/myc/super_linux/collections/linkedlist_test1.c

CMakeFiles/linkedlist_test1.dir/linkedlist_test1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/linkedlist_test1.dir/linkedlist_test1.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tomoharu/myc/super_linux/collections/linkedlist_test1.c > CMakeFiles/linkedlist_test1.dir/linkedlist_test1.c.i

CMakeFiles/linkedlist_test1.dir/linkedlist_test1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/linkedlist_test1.dir/linkedlist_test1.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tomoharu/myc/super_linux/collections/linkedlist_test1.c -o CMakeFiles/linkedlist_test1.dir/linkedlist_test1.c.s

CMakeFiles/linkedlist_test1.dir/linkedlist.c.o: CMakeFiles/linkedlist_test1.dir/flags.make
CMakeFiles/linkedlist_test1.dir/linkedlist.c.o: /home/tomoharu/myc/super_linux/collections/linkedlist.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tomoharu/myc/super_linux/collections_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/linkedlist_test1.dir/linkedlist.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/linkedlist_test1.dir/linkedlist.c.o   -c /home/tomoharu/myc/super_linux/collections/linkedlist.c

CMakeFiles/linkedlist_test1.dir/linkedlist.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/linkedlist_test1.dir/linkedlist.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tomoharu/myc/super_linux/collections/linkedlist.c > CMakeFiles/linkedlist_test1.dir/linkedlist.c.i

CMakeFiles/linkedlist_test1.dir/linkedlist.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/linkedlist_test1.dir/linkedlist.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tomoharu/myc/super_linux/collections/linkedlist.c -o CMakeFiles/linkedlist_test1.dir/linkedlist.c.s

# Object files for target linkedlist_test1
linkedlist_test1_OBJECTS = \
"CMakeFiles/linkedlist_test1.dir/linkedlist_test1.c.o" \
"CMakeFiles/linkedlist_test1.dir/linkedlist.c.o"

# External object files for target linkedlist_test1
linkedlist_test1_EXTERNAL_OBJECTS =

linkedlist_test1: CMakeFiles/linkedlist_test1.dir/linkedlist_test1.c.o
linkedlist_test1: CMakeFiles/linkedlist_test1.dir/linkedlist.c.o
linkedlist_test1: CMakeFiles/linkedlist_test1.dir/build.make
linkedlist_test1: CMakeFiles/linkedlist_test1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tomoharu/myc/super_linux/collections_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable linkedlist_test1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/linkedlist_test1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/linkedlist_test1.dir/build: linkedlist_test1

.PHONY : CMakeFiles/linkedlist_test1.dir/build

CMakeFiles/linkedlist_test1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/linkedlist_test1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/linkedlist_test1.dir/clean

CMakeFiles/linkedlist_test1.dir/depend:
	cd /home/tomoharu/myc/super_linux/collections_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tomoharu/myc/super_linux/collections /home/tomoharu/myc/super_linux/collections /home/tomoharu/myc/super_linux/collections_build /home/tomoharu/myc/super_linux/collections_build /home/tomoharu/myc/super_linux/collections_build/CMakeFiles/linkedlist_test1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/linkedlist_test1.dir/depend

