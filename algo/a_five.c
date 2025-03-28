/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_five.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 14:18:03 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/28 07:49:09 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	a_five(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*zid;

	a_index(a, 5);
	tmp = *a;
	zid = (*a)->next;
	while (zid)
	{
		if (tmp->data > zid->data)
			tmp = zid;
		zid = zid->next;
	}
	if (tmp == (*a)->next)
		ra(a, b);
	else if (tmp == ((*a)->next)->next)
		(ra(a, b), ra(a, b));
	else if (tmp == ((*a)->prev)->prev)
		(rra(a, b), rra(a, b));
	else if (tmp == (*a)->prev)
		rra(a, b);
	pb(a, b);
	a_four(a, b, 1);
	pa(a, b);
}
