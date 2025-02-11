/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:41:32 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/11 17:14:13 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void lst_print(t_stack *head)
{
	int data;
	int size;

	size = 0;
	if (!head)
		ft_printf("\033[1;31mhead 5awi a zmr\033[0m\n");
	while (head)
	{
		size++;
		data = (int)head->data;
		if (data == 0)
            ft_printf("\033[1;31m%d\033[0m", 0);
        else if (data < 0)
            ft_printf("\033[4;1;34m%d\033[0m", data);
		else
			ft_printf("\033[1;36m%d\033[0m", data);
		ft_printf("\033[1;37m->\033[0m");
		head = head->next;
	}
	ft_printf("\033[1;35mNULL\033[0m");
	ft_printf("\033[1;33m %d\033[0m\n", size);
}

void	osaka()
{
	int	fd;
	char	buffer[3333];
	ssize_t	s;
	size_t	n;
	size_t	total_read;

	fd = open("osaka.txt", O_RDWR);
	if (!fd)
	{
		ft_printf("\033[1;31mmakaynax osaka ;_;\033[0m\n");
		return ;
	}
	n = 1369;
	total_read = 0;
	while ((s = read(fd, buffer, sizeof(buffer) - 1)) > 0)
	{
		buffer[s] = '\0';
		for (ssize_t i = 0; i < s; i++)
		{
			if (total_read == n)
				ft_printf("\033[1;31m kys \033[0m");
			ft_printf("%c", buffer[i]);
			total_read++;
		}
	}
}

void print_msg(int msg, bool s)
{
	if (msg == 0)
		ft_printf("\033[1;31mError: msg = 0\033[0m\n");
	else if (msg == 1)
		ft_printf("\033[1;31my ar u zo fa9in chtoupid u fakin ni9gr o_O\033[0m\n");
	else if (msg == 2)
		ft_printf("\033[1;32m9on9ratulaychnz! :D\033[0m\n");
	else if (msg == 3)
		ft_printf("\033[1;31mamogus?!\033[0m\n");
	else if (msg == 4)
		ft_printf("\033[1;31mError: epty str\033[0m\n");
	// else if (msg == 5)
	else
		ft_printf("\033[1;31mmsg makaynx?! 🤨\033[0m\n");
	if (s)
		exit(1);
}
