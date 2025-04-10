/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_three.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 14:36:45 by oel-mado          #+#    #+#             */
/*   Updated: 2025/04/10 07:02:01 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	in_three(t_stack *m, t_stack *n, t_stack *o, t_stack **a)
{
	if (n->index < m->index && n->index < o->index)
	{
		if (m->index > o->index)
			ra(a);
		else
			sa(a);
	}
	else if (n->index > m->index && n->index > o->index)
	{
		if (m->index > o->index)
			rra(a);
		else
		{
			sa(a);
			ra(a);
		}
	}
	else
	{
		if (m->index > o->index)
		{
			ra(a);
			sa(a);
		}
	}
}

void	a_three(t_stack **a)
{
	if ((((*a)->next)->next)->is_null)
		a_two(a);
	else if (!is_sorted(a))
		in_three(*a, ((*a)->next), ((*a)->next)->next, a);
}
