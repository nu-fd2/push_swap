/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 18:42:19 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/24 01:23:08 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
#define CHECK_H

# include <stdbool.h>
# include "../main/push_swap.h"

bool is_it_good(char **arg);
bool is_number(char *arg);
bool is_multi_arg(char *arg);

#endif //CHECK_H
