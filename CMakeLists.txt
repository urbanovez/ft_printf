cmake_minimum_required(VERSION 3.15)
project(ft_printf C)

set(CMAKE_C_STANDARD 99)
include_directories(libft)

add_executable(ft_printf main.c ft_printf.h libft/ft_putchar.c libft/ft_putstr_fd libft/ft_putchar_fd.c libft/ft_memalloc.c libft/ft_bzero.c libft/ft_strlen.c flags.c libft/ft_putstr ft_printf.c)