/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_print_rev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 01:47:57 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/21 09:40:43 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	s_print_rev(t_stack *head)
{
	int		data;
	int		size = 0;
	int		i = 0;

	if (!head)
	{
		ft_printf("\033[1;31mhead is NULL\033[0m\n");
		return;
	}
	ft_printf("\033[1;35mhead    : %d\033[0m", (int)head->data);
	ft_printf("\033[1;37m->\033[0m");
	head = head->prev;
	size++;
	while (i < 15)
	{
		i++;
		size++;
		data = (int)head->data;
		if (data == 0)
		{
			if (head->is_null == 1)
				ft_printf("\033[1;33mE\033[0m");
			else
				ft_printf("\033[1;31m%d\033[0m", 0);
		}
		else if (data < 0)
			ft_printf("\033[4;1;34m%d\033[0m", data);
		else
			ft_printf("\033[1;36m%d\033[0m", data);
		
		ft_printf("\033[1;37m->\033[0m");
		head = head->prev;
	}
	ft_printf("\033[1;35mNULL\033[0m");
	ft_printf("\033[1;33m %d\033[0m\n", size);
}
