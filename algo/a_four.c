/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_four.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 09:03:51 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/29 14:07:18 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	a_four(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*zid;

	if(is_sorted(a))
		return ;
	tmp = *a;
	zid = (*a)->next;
	while (zid)
	{
		if (tmp->data > zid->data)
			tmp = zid;
		zid = zid->next;
	}
	if (tmp == (*a)->next)
		ra(a);
	else if (tmp == ((*a)->next)->next)
		(ra(a), ra(a));
	else if (tmp == (((*a)->next)->next)->next)
		rra(a);
	pb(a, b);
	a_three(a);
	pa(a, b);
}
