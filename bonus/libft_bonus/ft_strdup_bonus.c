/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 03:07:09 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/29 21:02:07 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

char	*ft_strdup(const char *s1)
{
	size_t	ln;
	char	*s2;

	ln = ft_strlen(s1) + 1;
	s2 = malloc(sizeof(char) * ln);
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, ln);
	return (s2);
}
