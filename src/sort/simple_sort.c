/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:08:18 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/14 15:56:41 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_numbers(t_stack *stack_a)
{
	if (!sorted_stacks(stack_a))
	{
		if ((stack_a->numbers[0] > stack_a->numbers[1]) \
		&& (stack_a->numbers[0] > stack_a->numbers[2]))
			swap_a(stack_a);
		else if ((stack_a->numbers[0] > stack_a->numbers[1]) \
		&& (stack_a->numbers[0] < stack_a->numbers[2]))
			rotate_a(stack_a);
		else if ((stack_a->numbers[0] < stack_a->numbers[1]) \
		&& (stack_a->numbers[0] < stack_a->numbers[2]) \
		&& stack_a->numbers[2] > stack_a->numbers[1])
		{
			rotate_a(stack_a);
			swap_a(stack_a);
		}
		else if ((stack_a->numbers[0] < stack_a->numbers[1]) \
		&& (stack_a->numbers[0] < stack_a->numbers[2]))
			reverse_rotate_a(stack_a);
		else
		{
			swap_a(stack_a);
			rotate_a(stack_a);
		}
	}
}

void	small_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	smallest;

	while (stack_a->top > 2)
	{
		smallest = find_smaller_number(stack_a);
		if (stack_a->numbers[stack_a->top] == smallest)
			push_b(stack_a, stack_b);
		else
			rotate_a(stack_a);
	}
	sort_three_numbers(stack_a);
	push_a(stack_b, stack_a);
	while (stack_b->top >= 0)
		push_a(stack_b, stack_a);
}

void	simple_sort(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->total_size == 3)
		sort_three_numbers(stack_a);
	else if (stack_a->total_size <= 5)
		small_sort(stack_a, stack_b);
}
