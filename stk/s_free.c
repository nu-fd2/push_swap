/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_free.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 04:33:50 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/22 22:48:31 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main/push_swap.h"

void s_free(t_stack **stk)
{
	t_stack *tmp;

	if (!stk || !*stk)
		return ;
	tmp = (*stk);
	while (*stk)
	{
		tmp = (*stk)->next;
		if ((*stk)->is_null == 0)
			(*stk)->data = 0;
		free(*stk);
		*stk = tmp;
	}
	stk = NULL;
	free(stk);
}
