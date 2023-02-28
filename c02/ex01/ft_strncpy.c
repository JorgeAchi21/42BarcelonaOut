/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:04:46 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/28 14:54:40 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	n = n -1;
	while (src[i] != '\0' && i <= n)
	{
		//printf("%d-", src[i]);
		dest[i]=src[i];
		i++;
	}
	return(dest);
}

#include <stdio.h>

int	main(void)
{
	int	i;

	char a[15]={"destdddddd"};
	char b[15]={"oriooooooo"};
	char *dest;
	char *src;

	dest = &a[0];
	src = &b[0];
	ft_strncpy(dest, src, 3);
	i=0;
	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}
	return (0);
}