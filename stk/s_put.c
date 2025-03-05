/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_put.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:00:29 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/05 16:31:38 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main/push_swap.h"

void s_put(int data, t_stack *node)
{
	if (!node)
		return ;
	if (node->is_null == false)
		return ;
	node->data = data;
}
