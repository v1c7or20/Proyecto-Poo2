# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
<<<<<<< Updated upstream
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1.3\bin\cmake\win\bin\cmake.exe" -E remove -f
=======
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe" -E remove -f
>>>>>>> Stashed changes

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
<<<<<<< Updated upstream
CMAKE_SOURCE_DIR = C:\Users\Renzo\Documents\GitHub\Proyecto-Poo2\Project_Poo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Renzo\Documents\GitHub\Proyecto-Poo2\Project_Poo\cmake-build-debug
=======
CMAKE_SOURCE_DIR = "C:\Users\Mauricio Rodriguez\Documents\Proyecto-Poo2\Project_Poo"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Mauricio Rodriguez\Documents\Proyecto-Poo2\Project_Poo\cmake-build-debug"
>>>>>>> Stashed changes

# Include any dependencies generated for this target.
include CMakeFiles/Project_Poo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project_Poo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project_Poo.dir/flags.make

CMakeFiles/Project_Poo.dir/main.cpp.obj: CMakeFiles/Project_Poo.dir/flags.make
CMakeFiles/Project_Poo.dir/main.cpp.obj: ../main.cpp
<<<<<<< Updated upstream
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Renzo\Documents\GitHub\Proyecto-Poo2\Project_Poo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project_Poo.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Project_Poo.dir\main.cpp.obj -c C:\Users\Renzo\Documents\GitHub\Proyecto-Poo2\Project_Poo\main.cpp

CMakeFiles/Project_Poo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_Poo.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Renzo\Documents\GitHub\Proyecto-Poo2\Project_Poo\main.cpp > CMakeFiles\Project_Poo.dir\main.cpp.i

CMakeFiles/Project_Poo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_Poo.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Renzo\Documents\GitHub\Proyecto-Poo2\Project_Poo\main.cpp -o CMakeFiles\Project_Poo.dir\main.cpp.s
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Mauricio Rodriguez\Documents\Proyecto-Poo2\Project_Poo\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project_Poo.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Project_Poo.dir\main.cpp.obj -c "C:\Users\Mauricio Rodriguez\Documents\Proyecto-Poo2\Project_Poo\main.cpp"

CMakeFiles/Project_Poo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_Poo.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Mauricio Rodriguez\Documents\Proyecto-Poo2\Project_Poo\main.cpp" > CMakeFiles\Project_Poo.dir\main.cpp.i

CMakeFiles/Project_Poo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_Poo.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Mauricio Rodriguez\Documents\Proyecto-Poo2\Project_Poo\main.cpp" -o CMakeFiles\Project_Poo.dir\main.cpp.s
>>>>>>> Stashed changes

# Object files for target Project_Poo
Project_Poo_OBJECTS = \
"CMakeFiles/Project_Poo.dir/main.cpp.obj"

# External object files for target Project_Poo
Project_Poo_EXTERNAL_OBJECTS =

Project_Poo.exe: CMakeFiles/Project_Poo.dir/main.cpp.obj
Project_Poo.exe: CMakeFiles/Project_Poo.dir/build.make
Project_Poo.exe: CMakeFiles/Project_Poo.dir/linklibs.rsp
Project_Poo.exe: CMakeFiles/Project_Poo.dir/objects1.rsp
Project_Poo.exe: CMakeFiles/Project_Poo.dir/link.txt
<<<<<<< Updated upstream
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Renzo\Documents\GitHub\Proyecto-Poo2\Project_Poo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Project_Poo.exe"
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Mauricio Rodriguez\Documents\Proyecto-Poo2\Project_Poo\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Project_Poo.exe"
>>>>>>> Stashed changes
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Project_Poo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project_Poo.dir/build: Project_Poo.exe

.PHONY : CMakeFiles/Project_Poo.dir/build

CMakeFiles/Project_Poo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Project_Poo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Project_Poo.dir/clean

CMakeFiles/Project_Poo.dir/depend:
<<<<<<< Updated upstream
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Renzo\Documents\GitHub\Proyecto-Poo2\Project_Poo C:\Users\Renzo\Documents\GitHub\Proyecto-Poo2\Project_Poo C:\Users\Renzo\Documents\GitHub\Proyecto-Poo2\Project_Poo\cmake-build-debug C:\Users\Renzo\Documents\GitHub\Proyecto-Poo2\Project_Poo\cmake-build-debug C:\Users\Renzo\Documents\GitHub\Proyecto-Poo2\Project_Poo\cmake-build-debug\CMakeFiles\Project_Poo.dir\DependInfo.cmake --color=$(COLOR)
=======
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Mauricio Rodriguez\Documents\Proyecto-Poo2\Project_Poo" "C:\Users\Mauricio Rodriguez\Documents\Proyecto-Poo2\Project_Poo" "C:\Users\Mauricio Rodriguez\Documents\Proyecto-Poo2\Project_Poo\cmake-build-debug" "C:\Users\Mauricio Rodriguez\Documents\Proyecto-Poo2\Project_Poo\cmake-build-debug" "C:\Users\Mauricio Rodriguez\Documents\Proyecto-Poo2\Project_Poo\cmake-build-debug\CMakeFiles\Project_Poo.dir\DependInfo.cmake" --color=$(COLOR)
>>>>>>> Stashed changes
.PHONY : CMakeFiles/Project_Poo.dir/depend

