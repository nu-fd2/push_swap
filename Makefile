# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/03 15:45:26 by oel-mado          #+#    #+#              #
#    Updated: 2025/03/21 05:38:05 by oel-mado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft/libft.a

CFLAGS = -Wall -Wextra -Werror

SRC = \
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
	\
	shw/of_leaks.c\
	shw/s_print.c\
	shw/s_print_rev.c\
	\
	\
	push_swap.c

test: all
	@echo "\033[1;35m|═══════════════════════════════════════════════════════════════════════════════════════════════════════>\033[0m"
	@echo "\033[1;31m./$(NAME)\033[1;34m 8 -5 7 3 2 10 1 2147483647 -2147483648 \033[1;33m\" +69   11\" ' -1' \"0 38 123456789    \"\033[0m"
	@echo ""
	@./$(NAME) 8 -5 7 3 2 10 1 2147483647 -2147483648 " +69   11" ' -1' "0 38 123456789    "
	@echo "\033[1;35m|═══════════════════════════════════════════════════════════════════════════════════════════════════════>\033[0m"

all: $(LIBFT) push_swap.h
	@cc $(SRC) $(LIBFT) -o $(NAME)

$(LIBFT):
	@make -C libft

clean:
	make -C libft clean

fclean:
	make -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
