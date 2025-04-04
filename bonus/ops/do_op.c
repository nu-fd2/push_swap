/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 10:54:15 by oel-mado          #+#    #+#             */
/*   Updated: 2025/04/01 16:24:53 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	do_op(t_stack **a, t_stack **b, char *op)
{
	if (op[0] == 'p')
		in_push(a, b, op);
	else if (op[0] == 's')
		in_swap(a, b, op);
	else if (op[0] == 'r')
	{
		if ((op[1] == 'a' || op[2] == 'a') && ((*a)->next)->is_null)
			return ;
		if ((op[1] == 'b' || op[2] == 'b') && ((*b)->next)->is_null)
			return ;
		in_rotate(a, b, op);
	}
	else
	{
		free(op);
		s_free(*a);
		s_free(*b);
		is_error();
	}
}
