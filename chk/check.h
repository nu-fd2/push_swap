/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 18:42:19 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/28 21:03:53 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
#define CHECK_H

# include "../main/push_swap.h"

void	is_error();
bool    is_number(char *arg);
int		is_it_good(char **arg);
int		is_multi_arg(char *arg);

#endif //CHECK_H
