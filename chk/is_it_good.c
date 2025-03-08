/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_it_good.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:13:25 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/07 22:01:41 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int is_it_good(char **arg)
{
	int i;
	int tmp;

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
