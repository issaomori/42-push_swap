/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:33:17 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/07 10:51:21 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdio.h>
# include "../libft/libft.h"

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct	s_stack
{
	int		*numbers;
	int		top;
	int		total_size;
	int		size;
}	t_stack;

int	verification_args(int argc, char **argv);
int		is_integer(char **argv);
int		numeric_range(char **argv);
int		numbers_duplicate(char **argv);
int		sorted_stacks(t_stack *stack);
t_stack *make_stack(int total_size);
void	start_stack (char **argv, t_stack *stack);
void	push_a(t_stack *s_src, t_stack *s_dest);
void	push_b(t_stack *s_src, t_stack *s_dest);
void	swap_a(t_stack *stack);
void	swap_b(t_stack *stack);
void	double_swap(t_stack *stack);
void	rotate_a(t_stack *stack);
void	rotate_b(t_stack *stack);
void	double_rotate(t_stack *stack);
void    reverse_rotate_a(t_stack *stack);
void    reverse_rotate_b(t_stack *stack);
void    double_reverse_rotate(t_stack *stack);


#endif