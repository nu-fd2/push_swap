/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_op.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 10:55:03 by oel-mado          #+#    #+#             */
/*   Updated: 2025/04/01 20:35:36 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	get_op(t_stack **a, t_stack **b)
{
	char	*op;

	op = get_next_line(0);
	while (op)
	{
		do_op(a, b, op);
		free(op);
		op = get_next_line(0);
	}
}
