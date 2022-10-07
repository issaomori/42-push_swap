/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:21:22 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/07 10:51:27 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    reverse_rotate_a(t_stack *stack)
{
    int keep_last;
    int found_last;

    found_last = 0;
    keep_last = stack->numbers[found_last];
    while (found_last < stack->top)
    {
        stack->numbers[found_last] = stack->numbers[found_last + 1];
        found_last++;
    }
    stack->numbers[stack->top] = keep_last;
    write(1, "rra\n", 4);
}

void    reverse_rotate_b(t_stack *stack)
{
    int keep_last;
    int found_last;

    found_last = 0;
    keep_last = stack->numbers[found_last];
    while (found_last < stack->top)
    {
        stack->numbers[found_last] = stack->numbers[found_last + 1];
        found_last++;
    }
    stack->numbers[stack->top] = keep_last;
    write(1, "rrb\n", 4);
}

void    double_reverse_rotate(t_stack *stack)
{
    reverse_rotate_a(stack);
    reverse_rotate_b(stack);
}
