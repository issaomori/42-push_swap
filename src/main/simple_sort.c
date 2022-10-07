/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:08:18 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/07 12:30:58 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_numbers(t_stack *stack_a, t_stack *stack_b);
{
	if (!is_sorted(stack_a))
	{
		
	}
}

void	small_sort(t_stack *stack)
{
	int	len;
	int	lesser_a;

	len = ft_stacklen(stack->a);
	while (!is_sorted(stack->a))
	{
		lesser_a = lesser_check(stack->a);
		if (lesser_a == 1)
		{
			if (ft_atoi(stack->a[0]) > ft_atoi(stack->a[len - 1]))
				rotate_a(stack);
			else
				swap_a(stack);
		}
		else if (lesser_a == 2)
		{
			if (ft_atoi(stack->a[0]) > ft_atoi(stack->a[1]))
				swap_a(stack);
			reverse_a(stack);
		}
		else
			swap_a(stack);
	}
}