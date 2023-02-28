/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:26:39 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/28 14:49:50 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	int	i;

	char a[30]={"destino.destino"};
	char b[30]={"ori.ori.ori.ori"};
	char *dest;
	char *src;

	dest = &a[0];
	src = &b[0];
	printf("Dest->%s===Ori->%s\n", dest, src);
	ft_strcpy(dest, src);
	printf("Dest->%s===ori->%s\n\n", dest, src);
	printf("Fun original: %s\n", strcpy(dest,src));
	return (0);
}