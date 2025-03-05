/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_make_in.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:54:30 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/05 17:13:08 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main/push_swap.h"

t_stack *s_make_in(char **args, int size)
{
	char *beta;

	int	(i), (j);
	t_stack (*head), (*lst), (*neo);
	beta = arr_data(args, size);
	if (size <= 0)
		return (NULL);
	lst = s_one(0, 0);
	if (!lst)
		return (NULL);
	lst->data = ft_atoi(beta[j++]);
	head = lst;
	i = 1;
	while (++i < size)
	{
		neo = s_one(0, 0);
		if (!neo)
			return (s_free(&head), NULL);
		lst->data = ft_atoi(beta[j++]);
		lst->next = neo;
		lst = lst->next;
	}
	return (head);
}
