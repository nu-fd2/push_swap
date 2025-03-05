/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:45:36 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/05 16:41:57 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/src/ft_printf.h"
# include "../libft/libft.h"
# include "../chk/check.h"
# include <stdbool.h>
# include <fcntl.h>


typedef struct s_stack
{
	int				data;
	bool			is_null;
	struct s_stack	*next;
}					t_stack;

t_stack	*s_make_empty(int size);
t_stack	*s_one(int data, bool is_null);
void	s_put(int data, t_stack *node);
void	s_free(t_stack **stk);

void stk_print(t_stack *head);

#endif // PUSH_SWAP_H
