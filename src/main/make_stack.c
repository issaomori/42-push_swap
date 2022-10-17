/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:07:08 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/17 12:37:15 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*make_stack(int total_size)
{
	t_stack	*stack;

	stack = ft_calloc(sizeof(t_stack), 1);
	if (stack == 0)
		return (0);
	stack->total_size = total_size;
	stack->top = -1;
	stack->numbers = ft_calloc(sizeof(int), stack->total_size);
	stack->capacity = stack->total_size;
	return (stack);
}

void	normalize(t_stack *stack_a)
{
	int	smaller;
	int	top;

	smaller = find_smaller_number(stack_a);
	top = stack_a->top;
	if (smaller < 0)
		smaller *= -1;
	while (top >= 0)
	{
		stack_a->numbers[top] += smaller + 1;
		top--;
	}
}

void	start_stack(char **argv, t_stack *stack)
{
	int		i;
	int		j;

	i = 1;
	j = stack->total_size - 1;
	while (j > -1)
	{
		stack->numbers[j] = ft_atoi(argv[i]);
		stack->top++;
		i++;
		j--;
	}
	normalize(stack);
}

int	*create_stack_aux(t_stack *stack)
{
	int	*stack_sorted;
	int	i;

	i = 0;
	stack_sorted = ft_calloc(sizeof(int), stack->capacity);
	while (i < stack->total_size)
	{
		stack_sorted[i] = stack->numbers[i];
		i++;
	}
	return (stack_sorted);
}

int	*sort_stack_aux(t_stack *stack)
{
	int	i;
	int	value;
	int	aux;
	int	*stack_sorted;
	i = 0;
	stack_sorted = create_stack_aux(stack);
	while (i < stack->total_size)
	{
		value = i;
		while (value < stack->total_size)
		{
			if (stack_sorted[i] > stack_sorted[value])
			{
				aux = stack_sorted[i];
				stack_sorted[i] = stack_sorted[value];
				stack_sorted[value] = aux;
			}
			value++;
		}
		i++;
	}
	return (stack_sorted);
}
