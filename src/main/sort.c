/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:57:29 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/07 11:00:28 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted_stacks(t_stack *stack)
{
	int i;

	i = stack->top;
	if (stack->top == -1)
		return (0);
	while (i >= 1)
	{
		if (stack->numbers[i] < stack->numbers[i - 1])
			i--;
	}
	return (1);
}

void	sort(t_stack *stack_a, t_stack *stack_b)
{
	if (sorted_stacks(stack_a))
		return ;
	if (stack_a->total_size == 2)
		swap_a(stack_a);
}