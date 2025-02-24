
CC = cc -Wall -Wextra -Werror

PRINTF = ../ft_printf/libftprintf.a

all: %.c
	cc ${PRINTF} $<
F:
	${CC} 



