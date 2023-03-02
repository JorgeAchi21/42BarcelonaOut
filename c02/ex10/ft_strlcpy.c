/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:35:35 by jachiaga          #+#    #+#             */
/*   Updated: 2023/03/02 10:22:45 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 1)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			printf("-i:%i-", i);
			dest[i] = src[i];
			i++;
		}
		while (i < size)
		{
			dest[i] = '\0';
			i++;
		}
	}
	i = 0;
	while (src[i++])
	{
	}
	return (i - 1);
}

int	main(void)
{
	//concatenar 2 cadenas.
	unsigned int	out;


	char dest[]={"a2346789a"};
	char src[]={"b234b"};
	//char str[]={'\0'};
	//char str[]={"abcAAAA\t"};
	//char str[]={"abcAAAA"};

	printf("==ori==");
	printf("\nDestino.:%s.-origen: %s.", dest, src);
	out = ft_strlcpy(dest, src, 10);
	printf("\nDestino.:%s.-origen: %s.-salida:%i", dest, src, out);
	printf("\nFun std:");
	printf("\n==fin==");
	return(0);
}