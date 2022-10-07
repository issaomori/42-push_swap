/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:29:42 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/07 10:50:00 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *stack)
{
	int	temp;

	temp = stack->numbers[stack->top];
	stack->numbers[stack->top] = stack->numbers[stack->top - 1] = temp;
	write(1, "sa\n", 3);
}

void	swap_b(t_stack *stack)
{
	int	temp;

	temp = stack->numbers[stack->top];
	stack->numbers[stack->top] = stack->numbers[stack->top - 1] = temp;
	write(1, "sb\n", 3);
}

void	double_swap(t_stack *stack)
{
	swap_a(stack);
	swap_b(stack);
}
