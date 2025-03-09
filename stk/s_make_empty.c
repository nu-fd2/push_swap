/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_make_empty.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:38:22 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/09 19:34:05 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*s_make_empty(int size)
{
	int	i;

	t_stack (*head), (*lst), (*neo);
	i = 0;
	if (size <= 0)
		return (NULL);
	lst = s_one(0, 1);
	if (!lst)
		return (NULL);
	head = lst;
	while (++i < size)
	{
		neo = s_one(0, 1);
		if (!neo)
			return (s_free(head), NULL);
		lst->next = neo;
		lst = lst->next;
	}
	return (head);
}
