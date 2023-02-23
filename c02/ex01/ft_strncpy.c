/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <jachiaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:04:46 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/22 16:31:21 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_size()
{
	return(5);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;
	n = n -1;
	while (src[i] != '\0' && i <= n)
	{
		//printf("%d-", src[i]);
		dest[i]=src[i];
		i++;
	}
	return(0);
}
