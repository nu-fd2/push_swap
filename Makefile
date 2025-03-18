# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/03 15:45:26 by oel-mado          #+#    #+#              #
#    Updated: 2025/03/18 05:04:22 by oel-mado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft/libft.a

CFLAGS = -Wall -Wextra -Werror

SRC = chk/is_error.c\
	chk/is_it_good.c\
	chk/is_multi_arg.c\
	chk/is_number.c\
	stk/s_data.c\
	stk/s_make_a.c\
	stk/s_one.c\
	stk/s_put.c\
	stk/s_atoi.c\
	stk/s_free.c\
	stk/s_make_empty.c\
	stk/s_print.c\
	\
	\
	stk/main.c

all: $(LIBFT) push_swap.h
	cc $(CFLAGS) $(SRC) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C libft

clean:
	make -C libft clean

fclean:
	make -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
