/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_print.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 01:47:57 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/18 01:48:07 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	s_print(t_stack *head)
{
	int		data;
	int		size;

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
