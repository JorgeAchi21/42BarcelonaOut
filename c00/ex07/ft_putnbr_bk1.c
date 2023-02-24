/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_funciona.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:08:02 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/14 15:01:24 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

void ft_print_num (int num)
{
	char carac;

	carac = num + '0';
	write (1, &carac, 1);
}

int ft_tamano_int(int num)
{
	int size;
}

void	ft_putnbr(int number)
{
	int dividend;
	int divisor;
	int quotient;
	int module;

	int size;
	int div;
	int cociente;
	int salir;
	char carac;
	int i;
	int ii;
	
	salir = 1;
	size = 1;
	divisor = 10;
	//negativo
	if (number < 0)
	{
		write (1, "-", 1);
		number = number * (-1);	
	}	
	//tamano
	while (salir > 0)
	{
		div = number / divisor;
		if (div > 0 && div < 10) {
			size++;
			salir = 0;
		}
		else if (div >= 10)
		{
			divisor = divisor * 10;
			size++;
		}
		else
		{
			/*write una sola cifra*/
			ft_print_num (div);
			salir = 0;
		}
	}
	printf("numero de carac: %d\n", size);

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
		cociente = number / divisor;
		module = number % divisor;
		ft_print_num(cociente);
		//printf("\n dividendo: %d, divisor: %d, cociente: %d, module: %d\n", number, divisor, cociente, module);
		number = module;
		i--;

		if (i == 0)
		{
			ft_print_num(module);
			i = 0;
		}
	}
	write (1, "\n", 1);
}

int	main(void)
{
	ft_putnbr(-12345);
	return (0);
}