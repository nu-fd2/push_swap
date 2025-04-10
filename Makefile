# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/24 21:12:48 by oel-mado          #+#    #+#              #
#    Updated: 2025/04/10 10:29:45 by oel-mado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

BNS = checker

CFLAGS = -Wall -Wextra -Werror

SRC = \
	man/push_swap.c\
	\
	man/chk/is_error.c\
	man/chk/is_it_good.c\
	man/chk/is_multi_arg.c\
	man/chk/is_number.c\
	man/chk/is_sorted.c\
	\
	man/stk/s_data.c\
	man/stk/s_make_a.c\
	man/stk/s_one.c\
	man/stk/s_put.c\
	man/stk/s_atoi.c\
	man/stk/s_free.c\
	man/stk/s_make_empty.c\
	\
	man/mvs/src/push.c\
	man/mvs/src/swap.c\
	man/mvs/src/rotate.c\
	man/mvs/src/reverse_rotate.c\
	man/mvs/src/last.c\
	\
	man/mvs/ss.c\
	man/mvs/rr.c\
	man/mvs/rrr.c\
	man/mvs/pa.c\
	man/mvs/pb.c\
	man/mvs/sa.c\
	man/mvs/sb.c\
	man/mvs/ra.c\
	man/mvs/rb.c\
	man/mvs/rra.c\
	man/mvs/rrb.c\
	\
	man/algo/a_five.c\
	man/algo/a_four.c\
	man/algo/a_three.c\
	man/algo/a_two.c\
	man/algo/a_index.c\
	man/algo/a_atob.c\
	man/algo/a_btoa.c\
	man/algo/a_small.c\
	\
	man/libft/ft_calloc.c\
	man/libft/ft_bzero.c\
	man/libft/ft_memset.c\
	man/libft/ft_itoa.c\
	man/libft/ft_putstr_fd.c\
	man/libft/ft_strdup.c\
	man/libft/ft_putchar_fd.c\
	man/libft/ft_strlen.c\
	man/libft/ft_strlcpy.c\
	\
	\

BSRC = \
	bonus/checker_bonus.c\
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

$(NAME): $(OBJ)
	cc $(CFLAGS) $(OBJ) -o $(NAME)

$(BNS): $(BOBJ)
	cc $(CFLAGS) $(BOBJ) -o $(BNS)

man/%.o: man/%.c man/push_swap.h
	cc $(CFLAGS) -c $< -o $@

bonus/%.o: bonus/%.c bonus/push_swap_bonus.h
	cc $(CFLAGS) -c $< -o $@

b: bonus

c: clean

f: fclean

clean:
	rm -f $(OBJ) $(BOBJ)

fclean: clean
	rm -f $(NAME) $(BNS)

re: fclean all

.PHONY: all clean fclean re bonus
