/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_atob.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:14:34 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/24 20:47:14 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	a_atob(t_stack **a, t_stack **b, int size)
{
	int		min;
	int		max;

	min = 0;
	max = size * 0.05 + 10;
	while ((*a)->is_null != 1)
	{
		if ((*a)->index >= min && (*a)->index <= max)
		{
			pb(a, b);
			min++;
			max++;
		}
		else if ((*a)->index < min)
		{
			(pb(a, b), rb(b));
			min++;
			max++;
		}
		else
			ra(a);
	}
}
