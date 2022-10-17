/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:22:20 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/14 16:02:08 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verification_args(char **argv)
{
	if (is_integer(argv) && numeric_range(argv) && numbers_duplicate(argv))
		return (1);
	return (0);
}

int	is_integer(char **argv)
{
	char	**stack;
	int		i;
	int		j;

	i = 1;
	stack = argv;
	while (stack[i])
	{
		j = 0;
		while (stack[i][j])
		{
			if (stack[i][j] == '-')
				j++;
			if (!ft_isdigit(stack[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	numeric_range(char **argv)
{
	char	**stack;
	int		i;

	i = 1;
	stack = argv;
	while (stack[i])
	{
		if (ft_atol(stack[i]) > INT_MAX || ft_atol(stack[i]) < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

int	numbers_duplicate(char **argv)
{
	char	**stack;
	int		temp;
	int		i;
	int		j;

	i = 1;
	stack = argv;
	while (stack[i])
	{
		j = i + 1;
		temp = ft_atoi(stack[i]);
		while (stack[j])
		{
			if (temp == ft_atoi(stack[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
