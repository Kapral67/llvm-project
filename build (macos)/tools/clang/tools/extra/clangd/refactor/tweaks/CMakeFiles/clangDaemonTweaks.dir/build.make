# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/maxwellkapral/llvm-project/llvm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/maxwellkapral/llvm-project/build

# Include any dependencies generated for this target.
include tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/clangDaemonTweaks.dir/depend.make

# Include the progress variables for this target.
include tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/clangDaemonTweaks.dir/progress.make

# Include the compile flags for this target's objects.
include tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/clangDaemonTweaks.dir/flags.make

# Object files for target clangDaemonTweaks
clangDaemonTweaks_OBJECTS =

# External object files for target clangDaemonTweaks
clangDaemonTweaks_EXTERNAL_OBJECTS = \
"/Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/AddUsing.cpp.o" \
"/Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/AnnotateHighlightings.cpp.o" \
"/Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/DumpAST.cpp.o" \
"/Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/DefineInline.cpp.o" \
"/Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/DefineOutline.cpp.o" \
"/Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/ExpandAutoType.cpp.o" \
"/Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/ExpandMacro.cpp.o" \
"/Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/ExtractFunction.cpp.o" \
"/Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/ExtractVariable.cpp.o" \
"/Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/ObjCLocalizeStringLiteral.cpp.o" \
"/Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/PopulateSwitch.cpp.o" \
"/Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/RawStringLiteral.cpp.o" \
"/Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/RemoveUsingNamespace.cpp.o" \
"/Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/SwapIfBranches.cpp.o"

lib/libclangDaemonTweaks.a: tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/AddUsing.cpp.o
lib/libclangDaemonTweaks.a: tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/AnnotateHighlightings.cpp.o
lib/libclangDaemonTweaks.a: tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/DumpAST.cpp.o
lib/libclangDaemonTweaks.a: tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/DefineInline.cpp.o
lib/libclangDaemonTweaks.a: tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/DefineOutline.cpp.o
lib/libclangDaemonTweaks.a: tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/ExpandAutoType.cpp.o
lib/libclangDaemonTweaks.a: tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/ExpandMacro.cpp.o
lib/libclangDaemonTweaks.a: tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/ExtractFunction.cpp.o
lib/libclangDaemonTweaks.a: tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/ExtractVariable.cpp.o
lib/libclangDaemonTweaks.a: tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/ObjCLocalizeStringLiteral.cpp.o
lib/libclangDaemonTweaks.a: tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/PopulateSwitch.cpp.o
lib/libclangDaemonTweaks.a: tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/RawStringLiteral.cpp.o
lib/libclangDaemonTweaks.a: tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/RemoveUsingNamespace.cpp.o
lib/libclangDaemonTweaks.a: tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/obj.clangDaemonTweaks.dir/SwapIfBranches.cpp.o
lib/libclangDaemonTweaks.a: tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/clangDaemonTweaks.dir/build.make
lib/libclangDaemonTweaks.a: tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/clangDaemonTweaks.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/maxwellkapral/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Linking CXX static library ../../../../../../../lib/libclangDaemonTweaks.a"
	cd /Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks && $(CMAKE_COMMAND) -P CMakeFiles/clangDaemonTweaks.dir/cmake_clean_target.cmake
	cd /Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clangDaemonTweaks.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/clangDaemonTweaks.dir/build: lib/libclangDaemonTweaks.a

.PHONY : tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/clangDaemonTweaks.dir/build

tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/clangDaemonTweaks.dir/clean:
	cd /Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks && $(CMAKE_COMMAND) -P CMakeFiles/clangDaemonTweaks.dir/cmake_clean.cmake
.PHONY : tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/clangDaemonTweaks.dir/clean

tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/clangDaemonTweaks.dir/depend:
	cd /Users/maxwellkapral/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/maxwellkapral/llvm-project/llvm /Users/maxwellkapral/llvm-project/clang-tools-extra/clangd/refactor/tweaks /Users/maxwellkapral/llvm-project/build /Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks /Users/maxwellkapral/llvm-project/build/tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/clangDaemonTweaks.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/tools/extra/clangd/refactor/tweaks/CMakeFiles/clangDaemonTweaks.dir/depend

