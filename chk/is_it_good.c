/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_it_good.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:13:25 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/23 18:54:54 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

bool is_it_good(char **arg)
{
	int i;

	i = 0;
	while (arg[i])
	{
		if (is_number(arg[i]) == 0)
			i++;
		else if (is_multi_arg(arg[i]) == 0)
			i++;
		else
			return (1);
	}
	return (0);
}
