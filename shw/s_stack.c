/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_stack.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:07:05 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/24 16:28:48 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	s_stack(t_stack **head)
{
	t_stack	*t;
	int		in;
	int		tmp;

	t = *head;
	tmp = -1;
	while (t)
	{
		in = 0;
		if (tmp != -1 && t->index < tmp)
		{
			while (in <= t->index)
			{
				in++;
				ft_printf("\033[1;41m \033[0m");
			}
		}
		else
		{
			while (in <= t->index)
			{
				in++;
				ft_printf("\033[1;42m \033[0m");
			}
		}
		ft_printf(" %d\n", t->data);
		tmp = t->index;
		t = t->next;
	}
}
