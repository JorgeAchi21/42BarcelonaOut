/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printableBk1.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:40:23 by jachiaga          #+#    #+#             */
/*   Updated: 2023/03/01 16:25:52 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<unistd.h>

void ft_tohex(unsigned char c)
//void ft_tohex(char c, char *str)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char 	a;
	unsigned char 	b;

	a = ' ';
	b = ' ';

	i = c / 16;
	j = c % 16;

	if (i > 9)
		a = i + 87;
	else
		a = i + '0';
	if (j > 9)
		b = j + 87;
	else
		b = j + '0';
	printf("%c-%i:%c%c\n", c, c, a, b);
}

int	main(void)
{
	unsigned int	i;

	i = 0;
	while (i <= 255)
	{
		ft_tohex(i);
		i++;
	}
}