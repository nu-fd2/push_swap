/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_five.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 14:18:03 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/29 12:08:18 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	a_five(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*zid;

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
	a_four(a, b);
	pa(a, b);
}
