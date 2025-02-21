/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_make.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:38:22 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/21 06:12:55 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main/push_swap.h"

t_list	*s_make(char **arg)
{
	int	i;
	int	data;

	i = 1;
	t_list(*head), (*lst), (*neo);
	if (!arg || !arg[1])
		return (NULL);
	data = ft_atoi(arg[i]);
	lst = ft_lstnew((void *)(long)data);
	if (!lst)
		return (NULL);
	head = lst;
	while (arg[++i])
	{
		data = ft_atoi(arg[i]);
		neo = ft_lstnew((void *)(long)data);
		if (!neo)
		{
			ft_lstclear(&head, clr);
			return (NULL);
		}
		lst->next = neo;
		lst = lst->next;
	}
	return (lst->next = NULL, head);
}

t_list	*make_b(int argc)
{
	int	i;

	t_list(*head), (*lst), (*neo);
	if (!argc)
		return (NULL);
	lst = ft_lstnew(NULL);
	if (!lst)
		return (NULL);
	head = lst;
	i = 1;
	while (++i < argc)
	{
		neo = ft_lstnew(NULL);
		if (!neo)
		{
			ft_lstclear(&head, clr);
			return (NULL);
		}
		lst->next = neo;
		lst = lst->next;
	}
	return (head);
}
