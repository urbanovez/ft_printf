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
CMAKE_COMMAND = /home/mr_zubr/clion-2020.1.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/mr_zubr/clion-2020.1.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mr_zubr/CLionProjects/ft_printf

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ft_printf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ft_printf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ft_printf.dir/flags.make

CMakeFiles/ft_printf.dir/src/main.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/src/main.c.o: ../src/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ft_printf.dir/src/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/src/main.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/src/main.c

CMakeFiles/ft_printf.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/src/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/src/main.c > CMakeFiles/ft_printf.dir/src/main.c.i

CMakeFiles/ft_printf.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/src/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/src/main.c -o CMakeFiles/ft_printf.dir/src/main.c.s

CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.o: ../libft/ft_strcpy.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strcpy.c

CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strcpy.c > CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.i

CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strcpy.c -o CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.s

CMakeFiles/ft_printf.dir/libft/ft_strdel.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_strdel.c.o: ../libft/ft_strdel.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/ft_printf.dir/libft/ft_strdel.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_strdel.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strdel.c

CMakeFiles/ft_printf.dir/libft/ft_strdel.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_strdel.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strdel.c > CMakeFiles/ft_printf.dir/libft/ft_strdel.c.i

CMakeFiles/ft_printf.dir/libft/ft_strdel.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_strdel.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strdel.c -o CMakeFiles/ft_printf.dir/libft/ft_strdel.c.s

CMakeFiles/ft_printf.dir/libft/ft_strjoin.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_strjoin.c.o: ../libft/ft_strjoin.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/ft_printf.dir/libft/ft_strjoin.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_strjoin.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strjoin.c

CMakeFiles/ft_printf.dir/libft/ft_strjoin.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_strjoin.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strjoin.c > CMakeFiles/ft_printf.dir/libft/ft_strjoin.c.i

CMakeFiles/ft_printf.dir/libft/ft_strjoin.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_strjoin.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strjoin.c -o CMakeFiles/ft_printf.dir/libft/ft_strjoin.c.s

CMakeFiles/ft_printf.dir/libft/ft_strcmp.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_strcmp.c.o: ../libft/ft_strcmp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/ft_printf.dir/libft/ft_strcmp.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_strcmp.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strcmp.c

CMakeFiles/ft_printf.dir/libft/ft_strcmp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_strcmp.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strcmp.c > CMakeFiles/ft_printf.dir/libft/ft_strcmp.c.i

CMakeFiles/ft_printf.dir/libft/ft_strcmp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_strcmp.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strcmp.c -o CMakeFiles/ft_printf.dir/libft/ft_strcmp.c.s

CMakeFiles/ft_printf.dir/libft/ft_memdel.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_memdel.c.o: ../libft/ft_memdel.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/ft_printf.dir/libft/ft_memdel.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_memdel.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/libft/ft_memdel.c

CMakeFiles/ft_printf.dir/libft/ft_memdel.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_memdel.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/libft/ft_memdel.c > CMakeFiles/ft_printf.dir/libft/ft_memdel.c.i

CMakeFiles/ft_printf.dir/libft/ft_memdel.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_memdel.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/libft/ft_memdel.c -o CMakeFiles/ft_printf.dir/libft/ft_memdel.c.s

CMakeFiles/ft_printf.dir/libft/ft_putchar.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_putchar.c.o: ../libft/ft_putchar.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/ft_printf.dir/libft/ft_putchar.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_putchar.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/libft/ft_putchar.c

CMakeFiles/ft_printf.dir/libft/ft_putchar.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_putchar.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/libft/ft_putchar.c > CMakeFiles/ft_printf.dir/libft/ft_putchar.c.i

CMakeFiles/ft_printf.dir/libft/ft_putchar.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_putchar.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/libft/ft_putchar.c -o CMakeFiles/ft_printf.dir/libft/ft_putchar.c.s

CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.o: ../libft/ft_putstr_fd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/libft/ft_putstr_fd.c

CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/libft/ft_putstr_fd.c > CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.i

CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/libft/ft_putstr_fd.c -o CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.s

CMakeFiles/ft_printf.dir/libft/ft_strjoin_free.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_strjoin_free.c.o: ../libft/ft_strjoin_free.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/ft_printf.dir/libft/ft_strjoin_free.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_strjoin_free.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strjoin_free.c

CMakeFiles/ft_printf.dir/libft/ft_strjoin_free.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_strjoin_free.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strjoin_free.c > CMakeFiles/ft_printf.dir/libft/ft_strjoin_free.c.i

CMakeFiles/ft_printf.dir/libft/ft_strjoin_free.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_strjoin_free.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strjoin_free.c -o CMakeFiles/ft_printf.dir/libft/ft_strjoin_free.c.s

CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.o: ../libft/ft_putchar_fd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/libft/ft_putchar_fd.c

CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/libft/ft_putchar_fd.c > CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.i

CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/libft/ft_putchar_fd.c -o CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.s

CMakeFiles/ft_printf.dir/libft/ft_memalloc.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_memalloc.c.o: ../libft/ft_memalloc.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/ft_printf.dir/libft/ft_memalloc.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_memalloc.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/libft/ft_memalloc.c

CMakeFiles/ft_printf.dir/libft/ft_memalloc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_memalloc.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/libft/ft_memalloc.c > CMakeFiles/ft_printf.dir/libft/ft_memalloc.c.i

CMakeFiles/ft_printf.dir/libft/ft_memalloc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_memalloc.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/libft/ft_memalloc.c -o CMakeFiles/ft_printf.dir/libft/ft_memalloc.c.s

CMakeFiles/ft_printf.dir/libft/ft_bzero.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_bzero.c.o: ../libft/ft_bzero.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/ft_printf.dir/libft/ft_bzero.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_bzero.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/libft/ft_bzero.c

CMakeFiles/ft_printf.dir/libft/ft_bzero.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_bzero.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/libft/ft_bzero.c > CMakeFiles/ft_printf.dir/libft/ft_bzero.c.i

CMakeFiles/ft_printf.dir/libft/ft_bzero.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_bzero.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/libft/ft_bzero.c -o CMakeFiles/ft_printf.dir/libft/ft_bzero.c.s

CMakeFiles/ft_printf.dir/libft/ft_strlen.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_strlen.c.o: ../libft/ft_strlen.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/ft_printf.dir/libft/ft_strlen.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_strlen.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strlen.c

CMakeFiles/ft_printf.dir/libft/ft_strlen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_strlen.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strlen.c > CMakeFiles/ft_printf.dir/libft/ft_strlen.c.i

CMakeFiles/ft_printf.dir/libft/ft_strlen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_strlen.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strlen.c -o CMakeFiles/ft_printf.dir/libft/ft_strlen.c.s

CMakeFiles/ft_printf.dir/src/flags.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/src/flags.c.o: ../src/flags.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/ft_printf.dir/src/flags.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/src/flags.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/src/flags.c

CMakeFiles/ft_printf.dir/src/flags.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/src/flags.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/src/flags.c > CMakeFiles/ft_printf.dir/src/flags.c.i

CMakeFiles/ft_printf.dir/src/flags.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/src/flags.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/src/flags.c -o CMakeFiles/ft_printf.dir/src/flags.c.s

CMakeFiles/ft_printf.dir/libft/ft_putstr.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_putstr.c.o: ../libft/ft_putstr.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/ft_printf.dir/libft/ft_putstr.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_putstr.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/libft/ft_putstr.c

CMakeFiles/ft_printf.dir/libft/ft_putstr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_putstr.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/libft/ft_putstr.c > CMakeFiles/ft_printf.dir/libft/ft_putstr.c.i

CMakeFiles/ft_printf.dir/libft/ft_putstr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_putstr.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/libft/ft_putstr.c -o CMakeFiles/ft_printf.dir/libft/ft_putstr.c.s

CMakeFiles/ft_printf.dir/src/ft_printf.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/src/ft_printf.c.o: ../src/ft_printf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building C object CMakeFiles/ft_printf.dir/src/ft_printf.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/src/ft_printf.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/src/ft_printf.c

CMakeFiles/ft_printf.dir/src/ft_printf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/src/ft_printf.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/src/ft_printf.c > CMakeFiles/ft_printf.dir/src/ft_printf.c.i

CMakeFiles/ft_printf.dir/src/ft_printf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/src/ft_printf.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/src/ft_printf.c -o CMakeFiles/ft_printf.dir/src/ft_printf.c.s

CMakeFiles/ft_printf.dir/src/print_type_field.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/src/print_type_field.c.o: ../src/print_type_field.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building C object CMakeFiles/ft_printf.dir/src/print_type_field.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/src/print_type_field.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/src/print_type_field.c

CMakeFiles/ft_printf.dir/src/print_type_field.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/src/print_type_field.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/src/print_type_field.c > CMakeFiles/ft_printf.dir/src/print_type_field.c.i

CMakeFiles/ft_printf.dir/src/print_type_field.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/src/print_type_field.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/src/print_type_field.c -o CMakeFiles/ft_printf.dir/src/print_type_field.c.s

CMakeFiles/ft_printf.dir/libft/ft_strjoin_free2.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_strjoin_free2.c.o: ../libft/ft_strjoin_free2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building C object CMakeFiles/ft_printf.dir/libft/ft_strjoin_free2.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_strjoin_free2.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strjoin_free2.c

CMakeFiles/ft_printf.dir/libft/ft_strjoin_free2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_strjoin_free2.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strjoin_free2.c > CMakeFiles/ft_printf.dir/libft/ft_strjoin_free2.c.i

CMakeFiles/ft_printf.dir/libft/ft_strjoin_free2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_strjoin_free2.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/libft/ft_strjoin_free2.c -o CMakeFiles/ft_printf.dir/libft/ft_strjoin_free2.c.s

CMakeFiles/ft_printf.dir/src/print_di.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/src/print_di.c.o: ../src/print_di.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building C object CMakeFiles/ft_printf.dir/src/print_di.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/src/print_di.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/src/print_di.c

CMakeFiles/ft_printf.dir/src/print_di.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/src/print_di.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/src/print_di.c > CMakeFiles/ft_printf.dir/src/print_di.c.i

CMakeFiles/ft_printf.dir/src/print_di.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/src/print_di.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/src/print_di.c -o CMakeFiles/ft_printf.dir/src/print_di.c.s

CMakeFiles/ft_printf.dir/src/print_u.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/src/print_u.c.o: ../src/print_u.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building C object CMakeFiles/ft_printf.dir/src/print_u.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/src/print_u.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/src/print_u.c

CMakeFiles/ft_printf.dir/src/print_u.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/src/print_u.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/src/print_u.c > CMakeFiles/ft_printf.dir/src/print_u.c.i

CMakeFiles/ft_printf.dir/src/print_u.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/src/print_u.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/src/print_u.c -o CMakeFiles/ft_printf.dir/src/print_u.c.s

CMakeFiles/ft_printf.dir/src/print_o.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/src/print_o.c.o: ../src/print_o.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Building C object CMakeFiles/ft_printf.dir/src/print_o.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/src/print_o.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/src/print_o.c

CMakeFiles/ft_printf.dir/src/print_o.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/src/print_o.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/src/print_o.c > CMakeFiles/ft_printf.dir/src/print_o.c.i

CMakeFiles/ft_printf.dir/src/print_o.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/src/print_o.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/src/print_o.c -o CMakeFiles/ft_printf.dir/src/print_o.c.s

CMakeFiles/ft_printf.dir/src/print_xX.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/src/print_xX.c.o: ../src/print_xX.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Building C object CMakeFiles/ft_printf.dir/src/print_xX.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/src/print_xX.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/src/print_xX.c

CMakeFiles/ft_printf.dir/src/print_xX.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/src/print_xX.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/src/print_xX.c > CMakeFiles/ft_printf.dir/src/print_xX.c.i

CMakeFiles/ft_printf.dir/src/print_xX.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/src/print_xX.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/src/print_xX.c -o CMakeFiles/ft_printf.dir/src/print_xX.c.s

CMakeFiles/ft_printf.dir/src/ft_intmax.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/src/ft_intmax.c.o: ../src/ft_intmax.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_23) "Building C object CMakeFiles/ft_printf.dir/src/ft_intmax.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/src/ft_intmax.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/src/ft_intmax.c

CMakeFiles/ft_printf.dir/src/ft_intmax.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/src/ft_intmax.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/src/ft_intmax.c > CMakeFiles/ft_printf.dir/src/ft_intmax.c.i

CMakeFiles/ft_printf.dir/src/ft_intmax.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/src/ft_intmax.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/src/ft_intmax.c -o CMakeFiles/ft_printf.dir/src/ft_intmax.c.s

CMakeFiles/ft_printf.dir/src/print_f.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/src/print_f.c.o: ../src/print_f.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_24) "Building C object CMakeFiles/ft_printf.dir/src/print_f.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/src/print_f.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/src/print_f.c

CMakeFiles/ft_printf.dir/src/print_f.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/src/print_f.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/src/print_f.c > CMakeFiles/ft_printf.dir/src/print_f.c.i

CMakeFiles/ft_printf.dir/src/print_f.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/src/print_f.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/src/print_f.c -o CMakeFiles/ft_printf.dir/src/print_f.c.s

CMakeFiles/ft_printf.dir/src/print_p.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/src/print_p.c.o: ../src/print_p.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_25) "Building C object CMakeFiles/ft_printf.dir/src/print_p.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/src/print_p.c.o   -c /home/mr_zubr/CLionProjects/ft_printf/src/print_p.c

CMakeFiles/ft_printf.dir/src/print_p.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/src/print_p.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mr_zubr/CLionProjects/ft_printf/src/print_p.c > CMakeFiles/ft_printf.dir/src/print_p.c.i

CMakeFiles/ft_printf.dir/src/print_p.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/src/print_p.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mr_zubr/CLionProjects/ft_printf/src/print_p.c -o CMakeFiles/ft_printf.dir/src/print_p.c.s

# Object files for target ft_printf
ft_printf_OBJECTS = \
"CMakeFiles/ft_printf.dir/src/main.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_strdel.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_strjoin.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_strcmp.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_memdel.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_putchar.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_strjoin_free.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_memalloc.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_bzero.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_strlen.c.o" \
"CMakeFiles/ft_printf.dir/src/flags.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_putstr.c.o" \
"CMakeFiles/ft_printf.dir/src/ft_printf.c.o" \
"CMakeFiles/ft_printf.dir/src/print_type_field.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_strjoin_free2.c.o" \
"CMakeFiles/ft_printf.dir/src/print_di.c.o" \
"CMakeFiles/ft_printf.dir/src/print_u.c.o" \
"CMakeFiles/ft_printf.dir/src/print_o.c.o" \
"CMakeFiles/ft_printf.dir/src/print_xX.c.o" \
"CMakeFiles/ft_printf.dir/src/ft_intmax.c.o" \
"CMakeFiles/ft_printf.dir/src/print_f.c.o" \
"CMakeFiles/ft_printf.dir/src/print_p.c.o"

# External object files for target ft_printf
ft_printf_EXTERNAL_OBJECTS =

ft_printf: CMakeFiles/ft_printf.dir/src/main.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_strdel.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_strjoin.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_strcmp.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_memdel.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_putchar.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_strjoin_free.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_memalloc.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_bzero.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_strlen.c.o
ft_printf: CMakeFiles/ft_printf.dir/src/flags.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_putstr.c.o
ft_printf: CMakeFiles/ft_printf.dir/src/ft_printf.c.o
ft_printf: CMakeFiles/ft_printf.dir/src/print_type_field.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_strjoin_free2.c.o
ft_printf: CMakeFiles/ft_printf.dir/src/print_di.c.o
ft_printf: CMakeFiles/ft_printf.dir/src/print_u.c.o
ft_printf: CMakeFiles/ft_printf.dir/src/print_o.c.o
ft_printf: CMakeFiles/ft_printf.dir/src/print_xX.c.o
ft_printf: CMakeFiles/ft_printf.dir/src/ft_intmax.c.o
ft_printf: CMakeFiles/ft_printf.dir/src/print_f.c.o
ft_printf: CMakeFiles/ft_printf.dir/src/print_p.c.o
ft_printf: CMakeFiles/ft_printf.dir/build.make
ft_printf: CMakeFiles/ft_printf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_26) "Linking C executable ft_printf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ft_printf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ft_printf.dir/build: ft_printf

.PHONY : CMakeFiles/ft_printf.dir/build

CMakeFiles/ft_printf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ft_printf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ft_printf.dir/clean

CMakeFiles/ft_printf.dir/depend:
	cd /home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mr_zubr/CLionProjects/ft_printf /home/mr_zubr/CLionProjects/ft_printf /home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug /home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug /home/mr_zubr/CLionProjects/ft_printf/cmake-build-debug/CMakeFiles/ft_printf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ft_printf.dir/depend

