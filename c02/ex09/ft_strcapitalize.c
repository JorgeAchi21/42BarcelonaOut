/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:35:42 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/28 11:36:27 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
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
	char str[]={"abcdaaa"};
	//char str[]={'\0'};
	//char str[]={"abcAAAA\t"};
	//char str[]={"abcAAAA"};

	out = ft_strupcase( str );
	printf("salida mayusculas: %i -cadena: %s.", out, str);
	return(0);
}