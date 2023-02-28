/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:24:40 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/28 15:24:32 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str > '~')
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	int out;

	out = 0;
	//char str[]={"abcdefg\n"};
	//char str[]={'\0'};
	//char str[]={"abcAAAA\t"};
	char str[]={"abcAAAA"};

	out = ft_str_is_printable( str );
	printf("salida  printable:1/no printable:0= %i -cadena: %s.", out, str);
	return (0);
}