# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.3.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.3.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\cmake-build-debug

# Include any dependencies generated for this target.
include libs/CMakeFiles/libs.dir/depend.make

# Include the progress variables for this target.
include libs/CMakeFiles/libs.dir/progress.make

# Include the compile flags for this target's objects.
include libs/CMakeFiles/libs.dir/flags.make

libs/CMakeFiles/libs.dir/json/src/io.cpp.obj: libs/CMakeFiles/libs.dir/flags.make
libs/CMakeFiles/libs.dir/json/src/io.cpp.obj: ../libs/json/src/io.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libs/CMakeFiles/libs.dir/json/src/io.cpp.obj"
	cd /d C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\cmake-build-debug\libs && C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\libs.dir\json\src\io.cpp.obj -c C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\libs\json\src\io.cpp

libs/CMakeFiles/libs.dir/json/src/io.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libs.dir/json/src/io.cpp.i"
	cd /d C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\cmake-build-debug\libs && C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\libs\json\src\io.cpp > CMakeFiles\libs.dir\json\src\io.cpp.i

libs/CMakeFiles/libs.dir/json/src/io.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libs.dir/json/src/io.cpp.s"
	cd /d C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\cmake-build-debug\libs && C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\libs\json\src\io.cpp -o CMakeFiles\libs.dir\json\src\io.cpp.s

libs/CMakeFiles/libs.dir/json/src/io.cpp.obj.requires:

.PHONY : libs/CMakeFiles/libs.dir/json/src/io.cpp.obj.requires

libs/CMakeFiles/libs.dir/json/src/io.cpp.obj.provides: libs/CMakeFiles/libs.dir/json/src/io.cpp.obj.requires
	$(MAKE) -f libs\CMakeFiles\libs.dir\build.make libs/CMakeFiles/libs.dir/json/src/io.cpp.obj.provides.build
.PHONY : libs/CMakeFiles/libs.dir/json/src/io.cpp.obj.provides

libs/CMakeFiles/libs.dir/json/src/io.cpp.obj.provides.build: libs/CMakeFiles/libs.dir/json/src/io.cpp.obj


libs/CMakeFiles/libs.dir/json/src/value.cpp.obj: libs/CMakeFiles/libs.dir/flags.make
libs/CMakeFiles/libs.dir/json/src/value.cpp.obj: ../libs/json/src/value.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object libs/CMakeFiles/libs.dir/json/src/value.cpp.obj"
	cd /d C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\cmake-build-debug\libs && C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\libs.dir\json\src\value.cpp.obj -c C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\libs\json\src\value.cpp

libs/CMakeFiles/libs.dir/json/src/value.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libs.dir/json/src/value.cpp.i"
	cd /d C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\cmake-build-debug\libs && C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\libs\json\src\value.cpp > CMakeFiles\libs.dir\json\src\value.cpp.i

libs/CMakeFiles/libs.dir/json/src/value.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libs.dir/json/src/value.cpp.s"
	cd /d C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\cmake-build-debug\libs && C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\libs\json\src\value.cpp -o CMakeFiles\libs.dir\json\src\value.cpp.s

libs/CMakeFiles/libs.dir/json/src/value.cpp.obj.requires:

.PHONY : libs/CMakeFiles/libs.dir/json/src/value.cpp.obj.requires

libs/CMakeFiles/libs.dir/json/src/value.cpp.obj.provides: libs/CMakeFiles/libs.dir/json/src/value.cpp.obj.requires
	$(MAKE) -f libs\CMakeFiles\libs.dir\build.make libs/CMakeFiles/libs.dir/json/src/value.cpp.obj.provides.build
.PHONY : libs/CMakeFiles/libs.dir/json/src/value.cpp.obj.provides

libs/CMakeFiles/libs.dir/json/src/value.cpp.obj.provides.build: libs/CMakeFiles/libs.dir/json/src/value.cpp.obj


# Object files for target libs
libs_OBJECTS = \
"CMakeFiles/libs.dir/json/src/io.cpp.obj" \
"CMakeFiles/libs.dir/json/src/value.cpp.obj"

# External object files for target libs
libs_EXTERNAL_OBJECTS =

libs/liblibs.a: libs/CMakeFiles/libs.dir/json/src/io.cpp.obj
libs/liblibs.a: libs/CMakeFiles/libs.dir/json/src/value.cpp.obj
libs/liblibs.a: libs/CMakeFiles/libs.dir/build.make
libs/liblibs.a: libs/CMakeFiles/libs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library liblibs.a"
	cd /d C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\cmake-build-debug\libs && $(CMAKE_COMMAND) -P CMakeFiles\libs.dir\cmake_clean_target.cmake
	cd /d C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\cmake-build-debug\libs && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\libs.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libs/CMakeFiles/libs.dir/build: libs/liblibs.a

.PHONY : libs/CMakeFiles/libs.dir/build

libs/CMakeFiles/libs.dir/requires: libs/CMakeFiles/libs.dir/json/src/io.cpp.obj.requires
libs/CMakeFiles/libs.dir/requires: libs/CMakeFiles/libs.dir/json/src/value.cpp.obj.requires

.PHONY : libs/CMakeFiles/libs.dir/requires

libs/CMakeFiles/libs.dir/clean:
	cd /d C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\cmake-build-debug\libs && $(CMAKE_COMMAND) -P CMakeFiles\libs.dir\cmake_clean.cmake
.PHONY : libs/CMakeFiles/libs.dir/clean

libs/CMakeFiles/libs.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\libs C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\cmake-build-debug C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\cmake-build-debug\libs C:\Users\alexa\Desktop\USIU\APT1020\Programs\Chess\cmake-build-debug\libs\CMakeFiles\libs.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : libs/CMakeFiles/libs.dir/depend

