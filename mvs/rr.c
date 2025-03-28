/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:08:35 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/28 07:28:53 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	s_stack(a, 0);
	s_stack(b, 1);
}
