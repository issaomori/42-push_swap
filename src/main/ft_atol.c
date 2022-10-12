/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:40:56 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/10 17:31:44 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	ft_isdigit(int i)
{
	if (i >= 48 && i <= 57)
		return (1);
	return (0);
}

long	ft_atol(const char *str)
{
	long	result;
	long    ch_sign;
	long	count_size;

	result = 0;
	ch_sign = 1;
	count_size = 0;
	while (str[count_size] && ((str[count_size] >= '\t' && str[count_size] <= '\r') || str[count_size] == ' '))
		count_size++;
	if (str[count_size] == '-' || str[count_size] == '+')
	{
		if (str[count_size] == '-')
			ch_sign *= -1;
		count_size++;
	}
	while (ft_isdigit(str[count_size]))
	{
		result = (result * 10) + (str[count_size] - '0');
		count_size++;
	}
	return (ch_sign * result);
}
