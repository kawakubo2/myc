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
CMAKE_SOURCE_DIR = /home/tomoharu/myc/super_linux/rpn_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tomoharu/myc/super_linux/rpn_test_build

# Include any dependencies generated for this target.
include CMakeFiles/rpn.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rpn.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rpn.dir/flags.make

CMakeFiles/rpn.dir/rpn_test.c.o: CMakeFiles/rpn.dir/flags.make
CMakeFiles/rpn.dir/rpn_test.c.o: /home/tomoharu/myc/super_linux/rpn_test/rpn_test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tomoharu/myc/super_linux/rpn_test_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/rpn.dir/rpn_test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rpn.dir/rpn_test.c.o   -c /home/tomoharu/myc/super_linux/rpn_test/rpn_test.c

CMakeFiles/rpn.dir/rpn_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rpn.dir/rpn_test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tomoharu/myc/super_linux/rpn_test/rpn_test.c > CMakeFiles/rpn.dir/rpn_test.c.i

CMakeFiles/rpn.dir/rpn_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rpn.dir/rpn_test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tomoharu/myc/super_linux/rpn_test/rpn_test.c -o CMakeFiles/rpn.dir/rpn_test.c.s

CMakeFiles/rpn.dir/expression_parse.c.o: CMakeFiles/rpn.dir/flags.make
CMakeFiles/rpn.dir/expression_parse.c.o: /home/tomoharu/myc/super_linux/rpn_test/expression_parse.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tomoharu/myc/super_linux/rpn_test_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/rpn.dir/expression_parse.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rpn.dir/expression_parse.c.o   -c /home/tomoharu/myc/super_linux/rpn_test/expression_parse.c

CMakeFiles/rpn.dir/expression_parse.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rpn.dir/expression_parse.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tomoharu/myc/super_linux/rpn_test/expression_parse.c > CMakeFiles/rpn.dir/expression_parse.c.i

CMakeFiles/rpn.dir/expression_parse.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rpn.dir/expression_parse.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tomoharu/myc/super_linux/rpn_test/expression_parse.c -o CMakeFiles/rpn.dir/expression_parse.c.s

CMakeFiles/rpn.dir/stack.c.o: CMakeFiles/rpn.dir/flags.make
CMakeFiles/rpn.dir/stack.c.o: /home/tomoharu/myc/super_linux/rpn_test/stack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tomoharu/myc/super_linux/rpn_test_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/rpn.dir/stack.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rpn.dir/stack.c.o   -c /home/tomoharu/myc/super_linux/rpn_test/stack.c

CMakeFiles/rpn.dir/stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rpn.dir/stack.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tomoharu/myc/super_linux/rpn_test/stack.c > CMakeFiles/rpn.dir/stack.c.i

CMakeFiles/rpn.dir/stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rpn.dir/stack.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tomoharu/myc/super_linux/rpn_test/stack.c -o CMakeFiles/rpn.dir/stack.c.s

CMakeFiles/rpn.dir/linkedlist.c.o: CMakeFiles/rpn.dir/flags.make
CMakeFiles/rpn.dir/linkedlist.c.o: /home/tomoharu/myc/super_linux/rpn_test/linkedlist.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tomoharu/myc/super_linux/rpn_test_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/rpn.dir/linkedlist.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rpn.dir/linkedlist.c.o   -c /home/tomoharu/myc/super_linux/rpn_test/linkedlist.c

CMakeFiles/rpn.dir/linkedlist.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rpn.dir/linkedlist.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tomoharu/myc/super_linux/rpn_test/linkedlist.c > CMakeFiles/rpn.dir/linkedlist.c.i

CMakeFiles/rpn.dir/linkedlist.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rpn.dir/linkedlist.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tomoharu/myc/super_linux/rpn_test/linkedlist.c -o CMakeFiles/rpn.dir/linkedlist.c.s

# Object files for target rpn
rpn_OBJECTS = \
"CMakeFiles/rpn.dir/rpn_test.c.o" \
"CMakeFiles/rpn.dir/expression_parse.c.o" \
"CMakeFiles/rpn.dir/stack.c.o" \
"CMakeFiles/rpn.dir/linkedlist.c.o"

# External object files for target rpn
rpn_EXTERNAL_OBJECTS =

rpn: CMakeFiles/rpn.dir/rpn_test.c.o
rpn: CMakeFiles/rpn.dir/expression_parse.c.o
rpn: CMakeFiles/rpn.dir/stack.c.o
rpn: CMakeFiles/rpn.dir/linkedlist.c.o
rpn: CMakeFiles/rpn.dir/build.make
rpn: CMakeFiles/rpn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tomoharu/myc/super_linux/rpn_test_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable rpn"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rpn.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rpn.dir/build: rpn

.PHONY : CMakeFiles/rpn.dir/build

CMakeFiles/rpn.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rpn.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rpn.dir/clean

CMakeFiles/rpn.dir/depend:
	cd /home/tomoharu/myc/super_linux/rpn_test_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tomoharu/myc/super_linux/rpn_test /home/tomoharu/myc/super_linux/rpn_test /home/tomoharu/myc/super_linux/rpn_test_build /home/tomoharu/myc/super_linux/rpn_test_build /home/tomoharu/myc/super_linux/rpn_test_build/CMakeFiles/rpn.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rpn.dir/depend

