/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:23:44 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/17 15:02:21 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_position_number(t_stack *stack, int number)
{
	int	i;

	i = 0;
	while (stack->numbers[i] && stack->numbers[i] != number && i <= stack->top)
		i++;
	return (i);
}

void	move_to_b(t_stack *stack_a, t_stack *stack_b, int fixed_number)
{
	int	closer;
	int	i;

	closer = stack_a->total_size / 2;
	i = get_position_number(stack_a, fixed_number);
	if (stack_a->numbers[stack_a->top] <= fixed_number)
		push_b(stack_a, stack_b);
	else if (closer > i)
		reverse_rotate_a(stack_a);
	else
		rotate_a(stack_a);
}

void	move_to_a(t_stack *stack_a, t_stack *stack_b)
{
	int	closer;
	int	i;

	closer = stack_b->total_size / 2;
	i = get_position_number(stack_b, find_bigger_number(stack_b));
	if (stack_b->numbers[stack_b->top] == find_bigger_number(stack_b))
		push_a(stack_b, stack_a);
	else if (closer > i)
	{
		reverse_rotate_b(stack_b);
	}
	else
		rotate_b(stack_b);
}

void	sort(t_stack *stack_a, t_stack *stack_b, int *sorted, int magic)
{
	int	fixed_number;
	int	i;
	int	divider;

	i = stack_a->total_size;
	divider = 0;
	fixed_number = sorted[magic];
	while (stack_a->top > 0)
	{
		while (i > 0)
		{
			move_to_b(stack_a, stack_b, fixed_number);
			i--;
		}
		i = stack_a->total_size;
		fixed_number = fixed_number + magic;
		divider++;
	}
	while (stack_b->top >= 0)
		move_to_a(stack_a, stack_b);
}

void	complex_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	*sorted;

	sorted = sort_stack_aux(stack_a);
	if (stack_a->total_size < 20)
		sort(stack_a, stack_b, sorted, 6);
	else if (stack_a->total_size < 500)
		sort(stack_a, stack_b, sorted, 22);
	else if (stack_a->total_size < 2000)
		sort(stack_a, stack_b, sorted, 33);
	else
		sort(stack_a, stack_b, sorted, 222);
	free(sorted);
}
