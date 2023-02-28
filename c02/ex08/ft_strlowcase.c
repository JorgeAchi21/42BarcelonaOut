/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:32:28 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/28 15:57:24 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str < 'A' && *str > 'Z')
			str = str + ' ';
		str++;
	}
	return (str);
}

int	main(void)
{
	char	out[];

	out = 0;
	char str[]={"abcdaaa"};
	//char str[]={'\0'};
	//char str[]={"abcAAAA\t"};
	//char str[]={"abcAAAA"};

	out = ft_strupcase( str );
	printf("salida mayusculas: %i -cadena: %s.", out, str);
	return (0);
}