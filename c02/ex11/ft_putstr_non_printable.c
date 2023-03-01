/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:40:23 by jachiaga          #+#    #+#             */
/*   Updated: 2023/03/01 17:12:28 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<unistd.h>

void ft_tohex(char c, unsigned char *str)
{
	unsigned int		i;
	unsigned int		j;
	unsigned char	a;
	unsigned char	b;

	a =' ';
	b =' ';

	printf("[pasado:%i", *str);
	i = c / 16;
	j = c % 16;
	printf(".i:%i.j:%i", i, j);
	if (i > 9)
		a = a + 87;
	else
		a = i + '0';
	if (j > 9)
		b = b + 87;
	else
		b = j + '0';
	str[0] = a;
	str[1] = b;
	printf(".%c%c].", a, b);
}

int	ft_printable(char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

void	ft_putstr_non_printable(unsigned char *str)
{
	unsigned char	hexnum[2];

	while (*str)
	{
		if (ft_printable(*str) == 1)
		{
			write(1, str, 1); 
		}
		else
		{
			write(1, "\\", 1);
			//printf(".str:%s.", str);
			printf("[pasado:%c]", str);
			//ft_tohex(*str, hexnum);
			write(1, &hexnum[0], 1);
			write(1, &hexnum[1], 1);
		}
		str++;
	}
}

int	main(void)
{
	unsigned char str[] = {"coucou\ntu vas\30 bien\200 ?"};
	printf("original: %s.\n", str);
	//char str[]={'\0'};
	//char str[]={"abcAAAA\t"};
	//char str[]={"abcAAAA"};

	printf("salida:\n");
	ft_putstr_non_printable(str);
	write(1, ".", 1);
	return (0);
}