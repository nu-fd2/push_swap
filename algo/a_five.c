/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_five.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 14:18:03 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/29 16:04:44 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	a_five(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *a;
	if (is_sorted(a))
		return ;
	if ((tmp->next)->index == 0)
		ra(a);
	else if (((tmp->next)->next)->index == 0)
		(ra(a), ra(a));
	else if (((tmp->prev)->prev)->index == 0)
		(rra(a), rra(a));
	else if ((tmp->prev)->index == 0)
		rra(a);
	pb(a, b);
	a_four(a, b, 1);
	pa(a, b);
}
