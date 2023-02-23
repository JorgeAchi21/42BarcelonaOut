/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <jachiaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:02:34 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/22 16:31:32 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strncpy(char *dest, char *src,unsigned int n);

int main(void)
{
	int i;
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
