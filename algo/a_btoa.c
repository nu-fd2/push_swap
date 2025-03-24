/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_btoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:33:53 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/24 14:32:20 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pearto(t_stack **a, t_stack **b, int size, int who, int i)
{
	// t_stack	*lain;

	if (i == 0)
		pa(a, b);
	else
	{
		// ft_printf("\033[1;45;97mHiii!!! :3 >////<\n\033[0m");
		if (i <= size / 2)
		{
			while ((*b)->index != who)
				rb(b);
		}
		else
		{
			while ((*b)->index != who)
			{
				
				rrb(b);
			}
		}
		pa(a, b);
				s_print(*b);
				s_print(*a);
		exit(1);
	}
}

void	a_btoa(t_stack **a, t_stack **b, int size)
{
	t_stack	*teto;
	int		miku;
	int		miku_max_index;
	int		i;

	while (size > 0 )
	{
		i = 0;
		miku = 0;
		teto = *b;
		if ((teto->next)->is_null == 1)
			pa(a, b);
			
		else
		{
			// ft_printf("\033[1;45;97m%d\n\033[0m", miku);
			miku_max_index = 0;
			while (teto)
			{
				if (teto->index > miku_max_index)
				{
					miku_max_index = teto->index;
					miku  = i;
				}
				i++;
				teto = teto->next;
			}
			pearto(a, b, size, miku, i);
		}
		size--;
	}
}
