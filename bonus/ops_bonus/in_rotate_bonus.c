/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 10:56:44 by oel-mado          #+#    #+#             */
/*   Updated: 2025/04/01 16:21:29 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	in_rotate(t_stack **a, t_stack **b, char *op)
{
	if (op[1] == 'a' && op[2] == '\n')
		ra(a);
	else if (op[1] == 'b' && op[2] == '\n')
		rb(b);
	else if (op[1] == 'r')
	{
		if (op[2] == 'a' && op[3] == '\n')
			rra(a);
		else if (op[2] == 'b' && op[3] == '\n')
			rrb(b);
		else if (op[2] == 'r' && op[3] == '\n')
			(do_op(a, b, "rra\n"), do_op(a, b, "rrb\n"));
		else if (op[2] == '\n')
			(do_op(a, b, "ra\n"), do_op(a, b, "rb\n"));
	}
	else
	{
		free(op);
		s_free(*a);
		s_free(*b);
		is_error();
	}
}
