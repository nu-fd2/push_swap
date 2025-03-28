/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_three.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 14:36:45 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/28 07:47:08 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	in_three(t_stack *m, t_stack *n, t_stack *o, t_stack **a, t_stack **b)
{
	if (n->data < m->data && n->data < o->data)
	{
		if (m->data > o->data)
			ra(a, b);
		else
			sa(a, b);
	}
	else if (n->data > m->data && n->data > o->data)
	{
		if (m->data > o->data)
			rra(a, b);
		else
		{
			sa(a, b);
			ra(a, b);
		}
	}
	else
	{
		if (m->data > o->data)
		{
			ra(a, b);
			sa(a, b);
		}
	}
}

void	a_three(t_stack **a, t_stack **b, bool from_four)
{
	
	if (!from_four)
		a_index(a, 3);
	in_three(*a, ((*a)->next), ((*a)->next)->next, a, b);
}
