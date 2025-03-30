/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 10:54:15 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/30 10:54:33 by oel-mado         ###   ########.fr       */
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
		in_rotate(a, b, op);
}
