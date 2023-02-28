/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:40:23 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/28 16:11:05 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 'a' && *str > 'z')
			str = str + ' ';
		str++;
	}
	return (str);
}

int	main(void)
{
	char out[];

	out = 0;
	char str[] = {"coucou\ntu vas bien"};
	//char str[]={'\0'};
	//char str[]={"abcAAAA\t"};
	//char str[]={"abcAAAA"};

	out = ft_putstr_non_printable(str);
	printf("salida mayusculas: %i -cadena: %s.", out, str);
	return (0);
}