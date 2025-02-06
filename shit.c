/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:41:32 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/06 12:02:35 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void lst_print(t_list *head)
{
	int *data;

	if (!head)
		ft_printf("\033[1;31mhead 5awi a zmr\033[0m\n");
	while (head)
	{
		data = head->content;
		ft_printf("\033[1;33m%d\033[0m", data);
		ft_printf("->");
		head = head->next;
	}
	ft_printf("\033[1;35mNULL\033[0m\n");
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
