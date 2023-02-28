/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:33:22 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/28 15:55:36 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str)
{
	while (str)
	{
		if (*str < 'a' && *str > 'z')
			str = str - ' ';
		str++;
	}
	return (str);
}

int	main(void)
{
	char out[30]={};

	char str[]={"abcdaaa"};
	//char str[]={'\0'};
	//char str[]={"abcAAAA\t"};
	//char str[]={"abcAAAA"};

	*out = ft_strupcase( str );
	printf("salida mayusculas: %s -cadena: %s.", out, str);
	return (0);
}