/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:52:18 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/11 11:42:52 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack *stack)
{
	int	top;
	int	keep_top;

	top = stack->numbers[stack->top];
	keep_top = stack->top;
	while (keep_top > 0)
	{
		stack->numbers[keep_top] = stack->numbers[keep_top - 1];
		keep_top--;
	}
	stack->numbers[0] = top;
	write(1, "ra\n", 3);
}

void	rotate_b(t_stack *stack)
{
	int	top;
	int	keep_top;

	top = stack->numbers[stack->top];
	keep_top = stack->top;
	while (keep_top > 0)
	{
		stack->numbers[keep_top] = stack->numbers[keep_top - 1];
		keep_top--;
	}
	stack->numbers[0] = top;
	write(1, "rb\n", 3);
}

void	double_rotate(t_stack *stack)
{
	rotate_a(stack);
	rotate_b(stack);
}
