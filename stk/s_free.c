/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_free.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 04:33:50 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/21 05:54:16 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main/push_swap.h"

void s_free(t_stack **stk)
{
	t_stack *tmp;
	tmp = (*stk);
	while (*stk)
	{
		tmp = (*stk)->next;
		*stk = 0;
		free(*stk);
		*stk = tmp;
	}
	stk = NULL;
	free(stk);
}
