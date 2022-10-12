/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:56:03 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/11 11:10:36 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_smaller_number(t_stack *stack)
{
	int get_small;
	int i;

	i = 1;
	get_small = stack->numbers[0];
	while (i <= stack->top)
	{
		if (stack->numbers[i] < get_small)
			get_small = stack->numbers[i];
		i++;
	}
	return (get_small);
}

int	find_bigger_number(t_stack *stack)
{
	int	get_bigger;
	int	i;

	i = 0;
	get_bigger = stack->numbers[0];
	while (i <= stack->top)
	{
		if (stack->numbers[i] > get_bigger)
			get_bigger = stack->numbers[i];
		i++;
	}
	return (get_bigger);
}
