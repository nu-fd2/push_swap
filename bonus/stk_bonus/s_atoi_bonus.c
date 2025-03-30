/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_atoi_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:10:01 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/29 21:03:22 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

long	s_atoi(const char *str)
{
	int		i;
	int		sg;
	long	nb;

	i = 0;
	sg = 1;
	nb = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sg = -sg;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - 48);
		if ((nb * sg) < -2147483648 || (nb * sg) > 2147483647)
			return (696969696969);
		i++;
	}
	nb *= sg;
	return (nb);
}
