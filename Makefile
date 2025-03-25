# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/24 21:12:48 by oel-mado          #+#    #+#              #
#    Updated: 2025/03/24 21:13:29 by oel-mado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

LIBFT = libft/libft.a

CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g

SRC = push_swap.c \
	\
	chk/is_error.c\
	chk/is_it_good.c\
	chk/is_multi_arg.c\
	chk/is_number.c\
	\
	stk/s_data.c\
	stk/s_make_a.c\
	stk/s_one.c\
	stk/s_put.c\
	stk/s_atoi.c\
	stk/s_free.c\
	stk/s_make_empty.c\
	\
	mvs/src/push.c\
	mvs/src/swap.c\
	mvs/src/rotate.c\
	mvs/src/reverse_rotate.c\
	mvs/src/last.c\
	\
	mvs/ss.c\
	mvs/rr.c\
	mvs/rrr.c\
	mvs/pa.c\
	mvs/pb.c\
	mvs/sa.c\
	mvs/sb.c\
	mvs/ra.c\
	mvs/rb.c\
	mvs/rra.c\
	mvs/rrb.c\
	\
	algo/a_five.c\
	algo/a_four.c\
	algo/a_three.c\
	algo/a_two.c\
	algo/a_index.c\
	algo/a_atob.c\
	algo/a_btoa.c\
	\
	\

OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(OBJ)
	cc $(LIBFT) $(CFLAGS) -o $(NAME) $(OBJ) 

%.o: %.c push_swap.h
	cc $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C libft

clean:
	make -C libft clean
	rm -f $(OBJ)

fclean:
	make -C libft fclean
	rm -f $(NAME)
	rm -f $(OBJ)

re: fclean all

.PHONY: all clean fclean re
