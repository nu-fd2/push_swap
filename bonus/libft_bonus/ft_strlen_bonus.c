/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:42:08 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/29 21:02:12 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

size_t	ft_strlen(const char *who)
{
	size_t	ask;

	ask = 0;
	while (who[ask])
		ask++;
	return (ask);
}
