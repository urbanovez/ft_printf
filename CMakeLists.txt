cmake_minimum_required(VERSION 3.15)
project(ft_printf C)

set(CMAKE_C_STANDARD 99)
include_directories(libft)

add_executable(ft_printf src/main.c src/ft_printf.h libft/ft_strcpy.c libft/ft_strdel.c libft/ft_strjoin.c libft/ft_strcmp.c libft/ft_memdel.c libft/ft_putchar.c libft/ft_putstr_fd libft/ft_strjoin_free.c libft/ft_putchar_fd.c libft/ft_memalloc.c libft/ft_bzero.c libft/ft_strlen.c src/flags.c libft/ft_putstr src/ft_printf.c src/print_type_field.c libft/ft_strjoin_free2.c src/print_di.c src/print_u.c src/print_o.c src/print_xX.c src/ft_intmax.c src/print_f.c src/print_p.c)