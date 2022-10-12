/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:22:20 by gissao-m          #+#    #+#             */
/*   Updated: 2022/10/10 17:14:00 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//A primeira parte que irei fazer do meu código será uma checagem de erro, quando o número não for inteiro, precisa dar erro. Quando o número for maior do que o maior numero inteiro permitido (2147483647) ou maior do que o menor numero permitido (-2147483648). E quando houver duplicação de número no código.
#include "push_swap.h"

int	verification_args(int argc, char **argv)
{
	if (argc < 2)
		return (0);
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
//o int max nao passa do inteiro maximo aceitavel, talvez fazer uma func que pegue os long.
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

//posso ordenar e comparar o inteiro com o proximo
int	numbers_duplicate(char **argv)
{
	char	**stack;
	int		temp;
	int		i;
	int		j;

	i = 0;
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
//pensei em fazer algo que primeiro cheque a posicao dos numeros, para depois eu comecar a trabalhar com a organizacao.
//para fazer isso posso pensar em usar uma struct para salvar o conteudo conferido e assim conseguir passar para as minhas funcs.

void	checker_position_numbers(int argc, char **argv)
{
	
}
