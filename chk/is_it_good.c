/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_it_good.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:13:25 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/27 08:59:06 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

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
	i += tmp -1;
	ft_printf("\033[1;34mtmp = %d\033[0m\n", i);
	return (i);
}
