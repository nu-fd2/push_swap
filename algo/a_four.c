/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_four.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 09:03:51 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/29 16:08:49 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	a_four(t_stack **a, t_stack **b, bool ss)
{
	t_stack *tmp;

	tmp = *a;
	if (is_sorted(a))
		return ;
	if ((tmp->next)->index == ss)
		sa(a);
	else if (((tmp->next)->next)->index == ss)
		(ra(a), ra(a));
	else if ((tmp->prev)->index == ss)
		rra(a);
	pb(a, b);
	a_three(a);
	pa(a, b);
}
