/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_three.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 14:36:45 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/24 20:47:34 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	in_three(t_stack *m, t_stack *n, t_stack *o, t_stack **a)
{
	if (n->data < m->data && n->data < o->data)
	{
		if (m->data > o->data)
			ra(a);
		else
			sa(a);
	}
	else if (n->data > m->data && n->data > o->data)
	{
		if (m->data > o->data)
			rra(a);
		else
		{
			sa(a);
			ra(a);
		}
	}
	else
	{
		if (m->data > o->data)
		{
			ra(a);
			sa(a);
		}
	}
}

void	a_three(t_stack **a)
{
	in_three(*a, ((*a)->next), ((*a)->next)->next, a);
}
