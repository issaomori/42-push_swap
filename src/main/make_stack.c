/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:07:08 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/10 17:31:47 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *make_stack(int total_size)
{
	t_stack	*stack;

	stack = ft_calloc(sizeof(t_stack), 1);
	if (stack == 0)
		return (0);
	stack->total_size = total_size;
	stack->top = -1;
	stack->numbers = ft_calloc(sizeof(int), stack->total_size);
	return (stack);
}

void	start_stack (char **argv, t_stack *stack)
{
	int 	i;
	int		j;

	i = 1;
	j = stack->total_size - 1;

	while (j > - 1)
	{
		stack->numbers[j] = ft_atoi(argv[i]);
		stack->top++;
		i++;
		j--;
	}
}
