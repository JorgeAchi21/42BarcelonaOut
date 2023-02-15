/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:08:56 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/15 12:57:14 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

void ft_print_combn (int number)
{
	int i;
	int ii;
	int salto;
	int modulo;
	int saltoN;
	salto = 2;
	saltoN = 0;
	i = 1;
	number = 1000;
	while (i <= number)
	{
		modulo = i % 10;
		if (modulo == 0 && saltoN == 0 && i > 9)
		{
			saltoN = salto;
			salto = salto + 1;
			//printf ("salto:%d-", i);
		}
		
		if (saltoN==0)
		{
			printf ("%d, ", i);		
		}
		else
		{
			saltoN--;
		}
		i++;
	}
}

int	main (void)
{
	int a = 2147000000;
	int b = 2147483646; //funciona
	int c = 2147483647; //no funciona
	int d = -2147483649; //
	printf ("%d",Max_Integer_Size);
	//ft_print_combn(2);
	return (0);
}