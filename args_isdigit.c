/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:13:25 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/06 18:31:59 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	args_int(char **arg)
{
	int		i;
	int		j;
	bool	s;

	i = 1;
	j = 0;
	if (arg == NULL)
		return (1);
	while (arg[i])
	{
		while (arg[i][j])
		{
			s = ft_isdigit(arg[i][j]);
			if (s != 1)
			{
				ft_printf("\033[1;31my ar u zo fa9in chtoupid u fakin ni9gr o_O\033[0m\n");
				return (1);
			}
			j++;
		}
		j = 0;
		i++;
	}
	ft_printf("\033[1;32m9on9ratulaychnz! :D\033[0m\n");
	return (0);
}
