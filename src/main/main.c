/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:18:47 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/07 10:57:25 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (!verification_args(argc, argv))
	{
		write(2, "Error\n", 6);
		return (1);
	}
}
