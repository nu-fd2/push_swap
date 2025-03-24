/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_make_empty.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:38:22 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/21 14:13:33 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*s_make_empty(int size, bool is_null)
{
	int		i;
	t_stack	*head;
	t_stack	*lst;
	t_stack	*neo;
	t_stack	*old;

	i = 0;
	if (size <= 0)
		return (NULL);
	lst = s_one(0, is_null, 1);
	if (!lst)
		return (NULL);
	head = lst;
	while (++i < size)
	{
		neo = s_one(0, is_null, 0);
		if (!neo)
			return (s_free(head), NULL);
		old = lst;
		lst->next = neo;
		lst = lst->next;
		lst->prev = old;
	}
	head->prev = lst;
	return (head);
}
