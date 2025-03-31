/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 10:55:56 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/30 11:04:19 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	in_push(t_stack **a, t_stack **b, char *op)
{
	if (op[1] == 'a' && op[2] == '\n')
  {
    if (!((*a)->prev)->is_null)
      is_error();
    else
		  pa(a, b);
  }
	else if (op[1] == 'b' && op[2] == '\n')
  {
    if (!((*b)->prev)->is_null)
      is_error();
    else
		  pb(a, b);
  }
	else
		is_error();
}
