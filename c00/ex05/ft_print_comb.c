/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:54:13 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/13 17:28:54 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void ft_print (int a, int b, int c)
{
	char	carac;
	carac = a + 48;
	write (1, &carac, 1);
	carac = b + 48;
	write (1, &carac, 1);
	carac = c + 48;
	write (1, &carac, 1);
	if (a < 7){
		write (1, ", ", 2);
	}
	else
	{
		write (1, "\n", 1);
	}
}

void ft_print_comb (void)
{
	int	a;
	int	b;
	int	c;
	
	a = 0;
	while (a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			c = b + 1;
			while (c < 10)
			{
				ft_print (a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
	}
}

int	main (void)
{
	ft_print_comb();
	return (0);
}