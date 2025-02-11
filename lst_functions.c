/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:28:28 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/11 16:34:59 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacknew(int data)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

void	ft_del(t_stack **lst)
{
	t_stack	*fr;
	t_stack	*nxt;

	if (!lst || !(*lst))
		return ;
	nxt = *lst;
	while (nxt)
	{
		fr = nxt;
		nxt->data = 0;
		nxt->is_null = 0;
		nxt = nxt->next;
		free (fr);
	}
	*lst = NULL;
}

