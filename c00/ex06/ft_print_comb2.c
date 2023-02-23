/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:07:01 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/23 08:50:19 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void ft_put_int (int num)
{
	char	charac;

	charac = num + '0';
	write (1, &charac, 1);
}

void ft_print_digit (int a)
{
	int num;
	char carac;
	if (a < 10)
	{
		write (1, "0", 1);
		ft_put_int (a);
	}
	else
	{
		num = a / 10;
		ft_put_int (num);
		num = a % 10;
		ft_put_int (num);
	}
}

void ft_print_comb2()
{
	int a;
	int b;
	char carac;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100){
			ft_print_digit(a);
			write (1, " ", 1);
			ft_print_digit(b);
			if (a < 98)
			{
				write (1, ", ", 2);
			}
			else
			{
				write (1, "\n", 1);
			}
			b++;	
		}
		a++;
	}
}

int	main (void)
{
	ft_print_comb2();
	//ft_print_digit(25);
	return (0);
}