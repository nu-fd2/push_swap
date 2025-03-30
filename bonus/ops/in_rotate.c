/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 10:56:44 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/30 10:57:13 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	in_rotate(t_stack **a, t_stack **b, char *op)
{
	if (op[1] == 'a')
		ra(a);
	else if (op[1] == 'b')
		rb(b);
	else if (op[1] == 'r')
	{
		if (op[2] == 'a')
			rra(a);
		else if (op[2] == 'b')
			rrb(b);
		else if (op[2] == 'r')
			rrr(a, b);
		else
			rr(a, b);
	}
}
