/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_four.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 09:03:51 by oel-mado          #+#    #+#             */
/*   Updated: 2025/04/10 09:34:38 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	a_four(t_stack **a, t_stack **b)
{
	int	i;

	if (is_sorted(a))
		return ;
	i = a_small(a);
	if (i == 1)
		sa(a);
	else if (i == 2)
		(ra(a), sa(a));
	else if (i == 3)
		rra(a);
	pb(a, b);
	a_three(a);
	pa(a, b);
}
