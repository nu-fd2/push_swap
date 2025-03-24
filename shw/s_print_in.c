/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_print_in.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 10:55:42 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/24 10:57:35 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

void	s_print_in(t_stack *head)
{
	int		index;
	int		size;

	size = 0;
	if (!head)
		ft_printf("\033[1;31mhead 5awi a zmr\033[0m\n");
	while (head)
	{
		size++;
		index = (int)head->index;
		if (index == -1)
		{
			if (head->is_null == 1)
				ft_printf("\033[1;33mE\033[0m");
			else
				ft_printf("\033[1;31m%d\033[0m", -1);
		}
		else
			ft_printf("\033[1;36m%d\033[0m", index);
		ft_printf("\033[1;37m->\033[0m");
		head = head->next;
	}
	ft_printf("\033[1;35mNULL\033[0m");
	ft_printf("\033[1;33m %d\033[0m\n", size);
}
