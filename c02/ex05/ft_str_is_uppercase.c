/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:01:46 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/27 16:23:15 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	int out;
	
	out = 0;
	//char str[]={"abcdefg"};
	char str[]={"abcAAAA"};

	out = ft_str_is_lowercase( str );
	printf("salida  Upper1/Lower0: %i -cadena: %s", out, str);
	return(0);
}
