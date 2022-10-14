/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:18:47 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/14 15:57:13 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (1);
	if (!verification_args(argv))
		return (write(2, "Error\n", 6));
	stack_a = make_stack(argc - 1);
	stack_b = make_stack(argc - 1);
	stack_b->total_size = 0;
	start_stack(argv, stack_a);
	push_swap(stack_a, stack_b);
	return (0);
}
