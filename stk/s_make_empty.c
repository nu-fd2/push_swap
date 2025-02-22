/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_make_empty.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:38:22 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/22 22:53:58 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main/push_swap.h"

t_stack	*s_make_empty(int size)
{
	int	i;

	t_stack (*head), (*lst), (*neo);
	if (size <= 0)
		return (NULL);
	lst = s_one(0, 1);
	if (!lst)
		return (NULL);
	head = lst;
	i = 1;
	while (++i < size)
	{
		neo = s_one(0, 1);
		if (!neo)
			return (s_free(&head), NULL);
		lst->next = neo;
		lst = lst->next;
	}
	return (head);
}
