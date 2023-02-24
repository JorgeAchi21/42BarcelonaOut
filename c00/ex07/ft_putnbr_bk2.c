/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:44:53 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/23 11:21:33 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_put_int(int num)
{
	char	charac;

	charac = num + '0';
	write (1, &charac, 1);
}

int	ft_size_int(int number)
{
	int	quotient;
	int	divisor;
	int	size;
	int	exit;

	exit = 1;
	size = 1;
	divisor = 10;
	while (exit > 0)
	{
		quotient = number / divisor;
		if (quotient > 0 && quotient < 10)
		{
			size++;
			exit = 0;
		}
		else if (quotient >= 10)
		{
			divisor = divisor * 10;
			size++;
		}
		else
		{
			ft_put_int (number);
			exit = 0;
		}
	}
	return (size);
}

void	ft_print_int(int number, int size)
{
	int	i;
	int	ii;
	int	divisor;
	int	quotient;
	int	module;

	i = size - 1;
	while (i > 0)
	{
		divisor = 10;
		ii = i;
		while (ii > 1)
		{
			divisor = divisor * 10;
			ii--;
		}
		quotient = number / divisor;
		module = number % divisor;
		ft_put_int(quotient);
		number = module;
		i--;
		if (i == 0)
		{
			ft_put_int(module);
			i = 0;
		}
	}	
}

void	ft_putnbr(int number)
{
	int	size;

	if (number != -2147483648)
	{
		if (number < 0)
		{
			write (1, "-", 1);
			number = number * (-1);
		}
		size = ft_size_int(number);
		ft_print_int(number, size);
		write (1, "\n", 1);
	}
}
