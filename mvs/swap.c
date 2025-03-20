/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 03:55:38 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/20 05:05:11 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack **who, char c)
{
	t_stack	*tmp;

	tmp = *who;
	*who = (*who)->next;
	tmp->next = (*who)->next;
	(*who)->next = tmp;
	ft_printf("s%c\n", c);
}
