/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_multi_arg_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 01:02:00 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/29 21:01:28 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	is_multi_arg(char *arg)
{
	int		i;
	int		nb;
	bool	s;

	i = 0;
	s = 0;
	nb = 0;
	while (arg[i])
	{
		if (arg[i] >= '0' && arg[i] <= '9')
		{
			if (s == 0)
			{
				nb++;
				s = 1;
			}
		}
		else
			s = 0;
		i++;
	}
	return (nb);
}
