# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 02:37:11 by oel-mado          #+#    #+#              #
#    Updated: 2025/03/09 08:31:03 by oel-mado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = chk.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIBFT = ../libft/libft.a

SRC = is_dup.c is_error.c is_it_good.c\
	is_multi_arg.c is_number.c

OBJ = ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}

%.o: %.c chk.h
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
