/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_btoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:33:53 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/24 20:47:11 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	nig(t_stack **b, int in)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *b;
	while (tmp)
	{
		i++;
		if (tmp->index == in)
			return (i);
		tmp = tmp->next;
	}
	return (-1);
}

void	pearto(t_stack **a, t_stack **b, int who, int size)
{
	int	i;

	i = nig(b, who);
	if ((*b)->index == who)
		pa(a, b);
	else
	{
		while ((*b)->index != who)
		{
			if (i <= size / 2)
				rb(b);
			else
				rrb(b);
		}
		pa(a, b);
	}
}

void	a_btoa(t_stack **a, t_stack **b, int size)
{
	t_stack	*teto;
	int		miku;
	int		i;

	while (size > 0)
	{
		miku = 0;
		i = 0;
		teto = *b;
		if (!teto->next || (teto->next)->is_null == 1)
			pa(a, b);
		else
		{
			teto = *b;
			while (teto && teto->is_null == 0)
			{
				if (teto->index > miku)
					miku = teto->index;
				teto = teto->next;
				i++;
			}
			pearto(a, b, miku, size);
		}
		size--;
	}
}
