/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:57:29 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/14 15:51:01 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted_stacks(t_stack *stack)
{
	int	i;

	i = stack->top;
	if (stack->top == -1)
		return (0);
	while (i >= 1)
	{
		if (stack->numbers[i] < stack->numbers[i - 1])
			i--;
		else
			return (0);
	}
	return (1);
}

void	push_swap(t_stack *stack_a, t_stack *stack_b)
{
	if (sorted_stacks(stack_a))
		return ;
	if (stack_a->total_size == 2)
		swap_a(stack_a);
	else if (stack_a->total_size < 6)
		simple_sort(stack_a, stack_b);
	else
		complex_sort(stack_a, stack_b);
}
