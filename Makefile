# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/24 21:12:48 by oel-mado          #+#    #+#              #
#    Updated: 2025/03/29 14:45:19 by oel-mado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

CFLAGS = -Wall -Wextra -Werror

SRC = push_swap.c\
	\
	chk/is_error.c\
	chk/is_it_good.c\
	chk/is_multi_arg.c\
	chk/is_number.c\
	chk/is_sorted.c\
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
	libft/ft_calloc.c\
	libft/ft_bzero.c\
	libft/ft_memset.c\
	libft/ft_itoa.c\
	libft/ft_putstr_fd.c\
	libft/ft_strdup.c\
	libft/ft_putchar_fd.c\
	libft/ft_strlen.c\
	libft/ft_strlcpy.c\
	\
	\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	cc $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c push_swap.h
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
