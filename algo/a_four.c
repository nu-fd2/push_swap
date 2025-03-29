/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_four.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 09:03:51 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/29 12:08:28 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	a_four(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*zid;

	tmp = *a;
	zid = (*a)->next;
	if (is_sorted(a))
		return ;
	while (zid)
	{
		if (tmp->data > zid->data && !zid->is_null)
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
	a_three(a, b);
	pa(a, b);
}
