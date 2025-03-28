/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_four.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 09:03:51 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/28 07:51:19 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	a_four(t_stack **a, t_stack **b, bool from_five)
{
	t_stack	*tmp;
	t_stack	*zid;

	if (!from_five)
		a_index(a, 4);
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
	else if (tmp == (*a)->prev)
		rra(a, b);
	pb(a, b);
	a_three(a, b, 1);
	pa(a, b);
}
