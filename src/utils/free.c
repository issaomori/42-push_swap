/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:52:15 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/17 15:00:56 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_code(t_stack *stack_a, t_stack *stack_b)
{
	free(stack_a->numbers);
	stack_a->numbers = NULL;
	free(stack_a);
	free(stack_b->numbers);
	stack_b->numbers = NULL;
	free(stack_b);
}
