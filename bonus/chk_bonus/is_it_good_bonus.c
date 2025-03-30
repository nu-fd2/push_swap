/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_it_good_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:13:25 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/29 21:01:24 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	is_it_good(char **arg)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = 0;
	while (arg[i])
	{
		is_number(arg[i]);
		tmp = tmp + is_multi_arg(arg[i]) - 1;
		i++;
	}
	i += tmp;
	return (i);
}
