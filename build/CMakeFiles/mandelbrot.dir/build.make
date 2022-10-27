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


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/build

# Include any dependencies generated for this target.
include CMakeFiles/mandelbrot.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mandelbrot.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mandelbrot.dir/flags.make

CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.o: CMakeFiles/mandelbrot.dir/flags.make
CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.o: ../calculators/BaseMandelCalculator.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.o -c /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/calculators/BaseMandelCalculator.cc

CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/calculators/BaseMandelCalculator.cc > CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.i

CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/calculators/BaseMandelCalculator.cc -o CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.s

CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.o.requires:

.PHONY : CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.o.requires

CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.o.provides: CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.o.requires
	$(MAKE) -f CMakeFiles/mandelbrot.dir/build.make CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.o.provides.build
.PHONY : CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.o.provides

CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.o.provides.build: CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.o


CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.o: CMakeFiles/mandelbrot.dir/flags.make
CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.o: ../calculators/BatchMandelCalculator.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.o -c /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/calculators/BatchMandelCalculator.cc

CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/calculators/BatchMandelCalculator.cc > CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.i

CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/calculators/BatchMandelCalculator.cc -o CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.s

CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.o.requires:

.PHONY : CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.o.requires

CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.o.provides: CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.o.requires
	$(MAKE) -f CMakeFiles/mandelbrot.dir/build.make CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.o.provides.build
.PHONY : CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.o.provides

CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.o.provides.build: CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.o


CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.o: CMakeFiles/mandelbrot.dir/flags.make
CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.o: ../calculators/LineMandelCalculator.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.o -c /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/calculators/LineMandelCalculator.cc

CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/calculators/LineMandelCalculator.cc > CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.i

CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/calculators/LineMandelCalculator.cc -o CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.s

CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.o.requires:

.PHONY : CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.o.requires

CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.o.provides: CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.o.requires
	$(MAKE) -f CMakeFiles/mandelbrot.dir/build.make CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.o.provides.build
.PHONY : CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.o.provides

CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.o.provides.build: CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.o


CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.o: CMakeFiles/mandelbrot.dir/flags.make
CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.o: ../calculators/RefMandelCalculator.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.o -c /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/calculators/RefMandelCalculator.cc

CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/calculators/RefMandelCalculator.cc > CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.i

CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/calculators/RefMandelCalculator.cc -o CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.s

CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.o.requires:

.PHONY : CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.o.requires

CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.o.provides: CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.o.requires
	$(MAKE) -f CMakeFiles/mandelbrot.dir/build.make CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.o.provides.build
.PHONY : CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.o.provides

CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.o.provides.build: CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.o


CMakeFiles/mandelbrot.dir/common/cnpy.cc.o: CMakeFiles/mandelbrot.dir/flags.make
CMakeFiles/mandelbrot.dir/common/cnpy.cc.o: ../common/cnpy.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/mandelbrot.dir/common/cnpy.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mandelbrot.dir/common/cnpy.cc.o -c /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/common/cnpy.cc

CMakeFiles/mandelbrot.dir/common/cnpy.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mandelbrot.dir/common/cnpy.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/common/cnpy.cc > CMakeFiles/mandelbrot.dir/common/cnpy.cc.i

CMakeFiles/mandelbrot.dir/common/cnpy.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mandelbrot.dir/common/cnpy.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/common/cnpy.cc -o CMakeFiles/mandelbrot.dir/common/cnpy.cc.s

CMakeFiles/mandelbrot.dir/common/cnpy.cc.o.requires:

.PHONY : CMakeFiles/mandelbrot.dir/common/cnpy.cc.o.requires

CMakeFiles/mandelbrot.dir/common/cnpy.cc.o.provides: CMakeFiles/mandelbrot.dir/common/cnpy.cc.o.requires
	$(MAKE) -f CMakeFiles/mandelbrot.dir/build.make CMakeFiles/mandelbrot.dir/common/cnpy.cc.o.provides.build
.PHONY : CMakeFiles/mandelbrot.dir/common/cnpy.cc.o.provides

CMakeFiles/mandelbrot.dir/common/cnpy.cc.o.provides.build: CMakeFiles/mandelbrot.dir/common/cnpy.cc.o


CMakeFiles/mandelbrot.dir/main.cc.o: CMakeFiles/mandelbrot.dir/flags.make
CMakeFiles/mandelbrot.dir/main.cc.o: ../main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/mandelbrot.dir/main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mandelbrot.dir/main.cc.o -c /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/main.cc

CMakeFiles/mandelbrot.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mandelbrot.dir/main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/main.cc > CMakeFiles/mandelbrot.dir/main.cc.i

CMakeFiles/mandelbrot.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mandelbrot.dir/main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/main.cc -o CMakeFiles/mandelbrot.dir/main.cc.s

CMakeFiles/mandelbrot.dir/main.cc.o.requires:

.PHONY : CMakeFiles/mandelbrot.dir/main.cc.o.requires

CMakeFiles/mandelbrot.dir/main.cc.o.provides: CMakeFiles/mandelbrot.dir/main.cc.o.requires
	$(MAKE) -f CMakeFiles/mandelbrot.dir/build.make CMakeFiles/mandelbrot.dir/main.cc.o.provides.build
.PHONY : CMakeFiles/mandelbrot.dir/main.cc.o.provides

CMakeFiles/mandelbrot.dir/main.cc.o.provides.build: CMakeFiles/mandelbrot.dir/main.cc.o


# Object files for target mandelbrot
mandelbrot_OBJECTS = \
"CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.o" \
"CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.o" \
"CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.o" \
"CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.o" \
"CMakeFiles/mandelbrot.dir/common/cnpy.cc.o" \
"CMakeFiles/mandelbrot.dir/main.cc.o"

# External object files for target mandelbrot
mandelbrot_EXTERNAL_OBJECTS =

mandelbrot: CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.o
mandelbrot: CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.o
mandelbrot: CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.o
mandelbrot: CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.o
mandelbrot: CMakeFiles/mandelbrot.dir/common/cnpy.cc.o
mandelbrot: CMakeFiles/mandelbrot.dir/main.cc.o
mandelbrot: CMakeFiles/mandelbrot.dir/build.make
mandelbrot: /usr/lib/x86_64-linux-gnu/libz.so
mandelbrot: CMakeFiles/mandelbrot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable mandelbrot"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mandelbrot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mandelbrot.dir/build: mandelbrot

.PHONY : CMakeFiles/mandelbrot.dir/build

CMakeFiles/mandelbrot.dir/requires: CMakeFiles/mandelbrot.dir/calculators/BaseMandelCalculator.cc.o.requires
CMakeFiles/mandelbrot.dir/requires: CMakeFiles/mandelbrot.dir/calculators/BatchMandelCalculator.cc.o.requires
CMakeFiles/mandelbrot.dir/requires: CMakeFiles/mandelbrot.dir/calculators/LineMandelCalculator.cc.o.requires
CMakeFiles/mandelbrot.dir/requires: CMakeFiles/mandelbrot.dir/calculators/RefMandelCalculator.cc.o.requires
CMakeFiles/mandelbrot.dir/requires: CMakeFiles/mandelbrot.dir/common/cnpy.cc.o.requires
CMakeFiles/mandelbrot.dir/requires: CMakeFiles/mandelbrot.dir/main.cc.o.requires

.PHONY : CMakeFiles/mandelbrot.dir/requires

CMakeFiles/mandelbrot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mandelbrot.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mandelbrot.dir/clean

CMakeFiles/mandelbrot.dir/depend:
	cd /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/build /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/build /mnt/c/Users/poucp/Desktop/schooll/1MIT/AVS/build/CMakeFiles/mandelbrot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mandelbrot.dir/depend

