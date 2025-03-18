/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_one.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:28:28 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/18 01:26:24 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*s_one(int data, bool is_null)
{
	t_stack	*new;

	new = ft_calloc(sizeof(t_stack), 1);
	if (!new)
		return (NULL);
	new->data = data;
	new->is_null = is_null;
	new->next = NULL;
	return (new);
}
