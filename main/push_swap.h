/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:45:36 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/23 18:50:47 by oel-mado         ###   ########.fr       */
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

t_stack	*s_make_empty(int size); //tatsn3 stack 5awi
t_stack	*s_one(int data, bool is_null); //tatalloci l data f node
void	s_put(int data, t_stack *node); //tat7t data f node
void	s_free(t_stack **stk); //tat5wi stack w tatfreeyih

#endif // PUSH_SWAP_H
