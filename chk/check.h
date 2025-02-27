/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 18:42:19 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/27 08:56:52 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
#define CHECK_H

# include <stdbool.h>
# include "../main/push_swap.h"

bool is_number(char *arg);
int is_it_good(char **arg);
int is_multi_arg(char *arg);
void is_error();

#endif //CHECK_H
