/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:31:01 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/27 19:04:46 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include	<stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int	tamano;
	char str[12]= "12345";

	tamano = 0;

	tamano = ft_strlen(str);
	printf("tamano de la cadena:%d", tamano);
	return (0);
}
