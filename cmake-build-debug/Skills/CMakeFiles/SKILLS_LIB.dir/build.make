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
CMAKE_COMMAND = /cygdrive/c/Users/d0sag3/AppData/Local/JetBrains/CLion2020.1/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/d0sag3/AppData/Local/JetBrains/CLion2020.1/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/d0sag3/Antonius-GameTemplate

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/d0sag3/Antonius-GameTemplate/cmake-build-debug

# Include any dependencies generated for this target.
include Skills/CMakeFiles/SKILLS_LIB.dir/depend.make

# Include the progress variables for this target.
include Skills/CMakeFiles/SKILLS_LIB.dir/progress.make

# Include the compile flags for this target's objects.
include Skills/CMakeFiles/SKILLS_LIB.dir/flags.make

Skills/CMakeFiles/SKILLS_LIB.dir/SkillBase.cpp.o: Skills/CMakeFiles/SKILLS_LIB.dir/flags.make
Skills/CMakeFiles/SKILLS_LIB.dir/SkillBase.cpp.o: ../Skills/SkillBase.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/d0sag3/Antonius-GameTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Skills/CMakeFiles/SKILLS_LIB.dir/SkillBase.cpp.o"
	cd /home/d0sag3/Antonius-GameTemplate/cmake-build-debug/Skills && /usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SKILLS_LIB.dir/SkillBase.cpp.o -c /home/d0sag3/Antonius-GameTemplate/Skills/SkillBase.cpp

Skills/CMakeFiles/SKILLS_LIB.dir/SkillBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SKILLS_LIB.dir/SkillBase.cpp.i"
	cd /home/d0sag3/Antonius-GameTemplate/cmake-build-debug/Skills && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/d0sag3/Antonius-GameTemplate/Skills/SkillBase.cpp > CMakeFiles/SKILLS_LIB.dir/SkillBase.cpp.i

Skills/CMakeFiles/SKILLS_LIB.dir/SkillBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SKILLS_LIB.dir/SkillBase.cpp.s"
	cd /home/d0sag3/Antonius-GameTemplate/cmake-build-debug/Skills && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/d0sag3/Antonius-GameTemplate/Skills/SkillBase.cpp -o CMakeFiles/SKILLS_LIB.dir/SkillBase.cpp.s

Skills/CMakeFiles/SKILLS_LIB.dir/WeaponSkill.cpp.o: Skills/CMakeFiles/SKILLS_LIB.dir/flags.make
Skills/CMakeFiles/SKILLS_LIB.dir/WeaponSkill.cpp.o: ../Skills/WeaponSkill.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/d0sag3/Antonius-GameTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Skills/CMakeFiles/SKILLS_LIB.dir/WeaponSkill.cpp.o"
	cd /home/d0sag3/Antonius-GameTemplate/cmake-build-debug/Skills && /usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SKILLS_LIB.dir/WeaponSkill.cpp.o -c /home/d0sag3/Antonius-GameTemplate/Skills/WeaponSkill.cpp

Skills/CMakeFiles/SKILLS_LIB.dir/WeaponSkill.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SKILLS_LIB.dir/WeaponSkill.cpp.i"
	cd /home/d0sag3/Antonius-GameTemplate/cmake-build-debug/Skills && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/d0sag3/Antonius-GameTemplate/Skills/WeaponSkill.cpp > CMakeFiles/SKILLS_LIB.dir/WeaponSkill.cpp.i

Skills/CMakeFiles/SKILLS_LIB.dir/WeaponSkill.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SKILLS_LIB.dir/WeaponSkill.cpp.s"
	cd /home/d0sag3/Antonius-GameTemplate/cmake-build-debug/Skills && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/d0sag3/Antonius-GameTemplate/Skills/WeaponSkill.cpp -o CMakeFiles/SKILLS_LIB.dir/WeaponSkill.cpp.s

# Object files for target SKILLS_LIB
SKILLS_LIB_OBJECTS = \
"CMakeFiles/SKILLS_LIB.dir/SkillBase.cpp.o" \
"CMakeFiles/SKILLS_LIB.dir/WeaponSkill.cpp.o"

# External object files for target SKILLS_LIB
SKILLS_LIB_EXTERNAL_OBJECTS =

Skills/libSKILLS_LIB.a: Skills/CMakeFiles/SKILLS_LIB.dir/SkillBase.cpp.o
Skills/libSKILLS_LIB.a: Skills/CMakeFiles/SKILLS_LIB.dir/WeaponSkill.cpp.o
Skills/libSKILLS_LIB.a: Skills/CMakeFiles/SKILLS_LIB.dir/build.make
Skills/libSKILLS_LIB.a: Skills/CMakeFiles/SKILLS_LIB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/d0sag3/Antonius-GameTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libSKILLS_LIB.a"
	cd /home/d0sag3/Antonius-GameTemplate/cmake-build-debug/Skills && $(CMAKE_COMMAND) -P CMakeFiles/SKILLS_LIB.dir/cmake_clean_target.cmake
	cd /home/d0sag3/Antonius-GameTemplate/cmake-build-debug/Skills && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SKILLS_LIB.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Skills/CMakeFiles/SKILLS_LIB.dir/build: Skills/libSKILLS_LIB.a

.PHONY : Skills/CMakeFiles/SKILLS_LIB.dir/build

Skills/CMakeFiles/SKILLS_LIB.dir/clean:
	cd /home/d0sag3/Antonius-GameTemplate/cmake-build-debug/Skills && $(CMAKE_COMMAND) -P CMakeFiles/SKILLS_LIB.dir/cmake_clean.cmake
.PHONY : Skills/CMakeFiles/SKILLS_LIB.dir/clean

Skills/CMakeFiles/SKILLS_LIB.dir/depend:
	cd /home/d0sag3/Antonius-GameTemplate/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/d0sag3/Antonius-GameTemplate /home/d0sag3/Antonius-GameTemplate/Skills /home/d0sag3/Antonius-GameTemplate/cmake-build-debug /home/d0sag3/Antonius-GameTemplate/cmake-build-debug/Skills /home/d0sag3/Antonius-GameTemplate/cmake-build-debug/Skills/CMakeFiles/SKILLS_LIB.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Skills/CMakeFiles/SKILLS_LIB.dir/depend
