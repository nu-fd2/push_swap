/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:21:34 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/29 21:03:02 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap_bonus.h"

t_stack	*last(t_stack **who)
{
	t_stack	*tmp;

	tmp = *who;
	while (tmp->next && tmp->next->is_null == 0)
		tmp = tmp->next;
	return (tmp);
}
