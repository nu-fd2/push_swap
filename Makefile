# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/24 21:12:48 by oel-mado          #+#    #+#              #
#    Updated: 2025/04/01 16:41:38 by oel-mado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

BNS = checker

CFLAGS = -Wall -Wextra -Werror

SRC = \
	push_swap.c\
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

BSRC = \
	bonus/checker.c\
	\
	bonus/chk_bonus/is_error_bonus.c\
	bonus/chk_bonus/is_it_good_bonus.c\
	bonus/chk_bonus/is_multi_arg_bonus.c\
	bonus/chk_bonus/is_number_bonus.c\
	bonus/chk_bonus/is_sorted_bonus.c\
	\
	bonus/stk_bonus/s_data_bonus.c\
	bonus/stk_bonus/s_make_a_bonus.c\
	bonus/stk_bonus/s_one_bonus.c\
	bonus/stk_bonus/s_put_bonus.c\
	bonus/stk_bonus/s_atoi_bonus.c\
	bonus/stk_bonus/s_free_bonus.c\
	bonus/stk_bonus/s_make_empty_bonus.c\
	\
	bonus/mvs_bonus/src/push_bonus.c\
	bonus/mvs_bonus/src/swap_bonus.c\
	bonus/mvs_bonus/src/rotate_bonus.c\
	bonus/mvs_bonus/src/reverse_rotate_bonus.c\
	bonus/mvs_bonus/src/last_bonus.c\
	\
	bonus/mvs_bonus/ss_bonus.c\
	bonus/mvs_bonus/rr_bonus.c\
	bonus/mvs_bonus/rrr_bonus.c\
	bonus/mvs_bonus/pa_bonus.c\
	bonus/mvs_bonus/pb_bonus.c\
	bonus/mvs_bonus/sa_bonus.c\
	bonus/mvs_bonus/sb_bonus.c\
	bonus/mvs_bonus/ra_bonus.c\
	bonus/mvs_bonus/rb_bonus.c\
	bonus/mvs_bonus/rra_bonus.c\
	bonus/mvs_bonus/rrb_bonus.c\
	\
	bonus/algo_bonus/a_index_bonus.c\
	\
	bonus/libft_bonus/ft_calloc_bonus.c\
	bonus/libft_bonus/ft_bzero_bonus.c\
	bonus/libft_bonus/ft_memset_bonus.c\
	bonus/libft_bonus/ft_itoa_bonus.c\
	bonus/libft_bonus/ft_putstr_fd_bonus.c\
	bonus/libft_bonus/ft_strdup_bonus.c\
	bonus/libft_bonus/ft_putchar_fd_bonus.c\
	bonus/libft_bonus/ft_strlen_bonus.c\
	bonus/libft_bonus/ft_strlcpy_bonus.c\
	\
	bonus/get_next_line/get_next_line_bonus.c\
	bonus/get_next_line/get_next_line_utils_bonus.c\
	\
	bonus/ops/do_op.c\
	bonus/ops/get_op.c\
	bonus/ops/in_swap.c\
	bonus/ops/in_push.c\
	bonus/ops/in_rotate.c\
	\

OBJ = $(SRC:.c=.o)

BOBJ = $(BSRC:.c=.o)

all: $(NAME)

bonus: $(BNS)

$(NAME): $(OBJ) push_swap.h
	cc $(CFLAGS) $(OBJ) -o $(NAME)

$(BNS): $(BOBJ) bonus/push_swap_bonus.h
	cc $(CFLAGS) $(BOBJ) -o $(BNS)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BOBJ)

fclean: clean
	rm -f $(NAME) $(BNS)

re: fclean all

.PHONY: all clean fclean re bonus
