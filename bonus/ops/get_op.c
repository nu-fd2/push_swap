/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_op.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 10:55:03 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/30 11:14:14 by oel-mado         ###   ########.fr       */
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
    s_print_stack(a, 0);
    write(1, "\033[1;36m", 7);
    if (op[2] == '\n')
      write(1, op, 2);
    else
      write(1, op, 3);
    write(1, "\033[0m", 4);
    s_print_stack(b, 1);
    if (op[0] == '\n')
      break;
		free(op);
		op = get_next_line(0);
	}
}

