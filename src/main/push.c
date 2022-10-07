/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:32:41 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/07 10:49:10 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *s_src, t_stack *s_dest)
{
	s_dest->total_size++;
	s_dest->top++;
	s_dest->numbers[s_dest->top] = s_src->numbers[s_src->top];
	s_src->total_size--;
	s_src->top--;
	write(1, "pa\n", 3);
}

void	push_b(t_stack *s_src, t_stack *s_dest)
{
	s_dest->total_size++;
	s_dest->top++;
	s_dest->numbers[s_dest->top] = s_src->numbers[s_src->top];
	s_src->top--;
	write(1, "pb\n", 3);
}
