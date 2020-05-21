# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpsylock <kpsylock@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/01 20:00:28 by kpsylock          #+#    #+#              #
#    Updated: 2019/10/15 20:12:32 by kpsylock         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libftprintf.a

SRC_DIR = ./src
FILES = flags.c ft_intmax.c ft_printf.c print_di.c\
    print_f.c print_o.c print_p.c print_type_field.c \
    print_u.c print_xX.c
SRC = $(addprefix $(SRC_DIR)/,$(FILES))
OBJ = $(SRC:.c=.o)

LIBFT = ./libft

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT)
	cp ./libft/libft.a ./$(NAME)
	ar rcs $(NAME) $(OBJ)

$(OBJ): %.o : %.c
	$(CC) $(CFLAGS) -I ./libft -I ./src -c $< -o $@


clean:
	rm -f $(OBJ)
	make clean -C ./libft

fclean: clean
	rm -f libftprintf.a
	make fclean -C ./libft

re: fclean all