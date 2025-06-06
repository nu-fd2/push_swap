/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 10:57:38 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/30 11:01:32 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	in_swap(t_stack **a, t_stack **b, char *op)
{
	if (op[1] == 'a' && op[2] == '\n')
		sa(a);
	else if (op[1] == 'b' && op[2] == '\n')
		sb(b);
	else if (op[1] == 's' && op[2] == '\n')
		ss(a, b);
	else
	{
		free(op);
		s_free(*a);
		s_free(*b);
		is_error();
	}
}
