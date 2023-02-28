/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:01:46 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/28 15:21:16 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
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
	int	salida;

	char	a[15] = {"ABCDEFGHIJ"};
	char	b[15] = {"1234567890"};
	char	c[16] = {"abcdefghij"};
	char	d[]={};

	salida = ft_str_is_lowercase(a);
	printf("Car upper(1Upper/0): %d-%s", salida, a);
	return (0);
}
