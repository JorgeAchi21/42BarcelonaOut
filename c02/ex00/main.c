/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <jachiaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:27:33 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/22 15:59:32 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	int i;
	char a[15]={"dest mundo"};
	char b[15]={"ori  estas"};
	char *dest;
	char *src;
	
	dest = &a[0];
	src = &b[0];
	ft_strcpy(dest, src);
	i=0;
	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}
	return (0);
}
