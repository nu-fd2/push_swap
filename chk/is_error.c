/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 21:01:41 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/24 20:48:50 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	is_error(void)
{
	write(2, "\033[1;31mError\033[0m\n", 18);
	exit(0);
}
