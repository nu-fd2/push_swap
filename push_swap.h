/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:45:36 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/06 18:31:49 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/src/ft_printf.h"
# include "libft/libft.h"
# include <fcntl.h>
# include <stdbool.h>

t_list	*make_a(char **arg);
void	clr(void *tata);
int		args_int(char **arg);

// some shit functions
void	lst_print(t_list *head);
void	osaka(void);
// end of shit functionst

#endif // PUSH_SWAP_H
