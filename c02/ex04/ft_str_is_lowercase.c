/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:49:35 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/28 15:21:36 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include    <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	out;

	i = 0;
	out = 1;
	while (str[i] != '\0')
	{
		if (str[i] >='a' && str[i] <= 'z')
		{
			printf(".");
		}	
		else
		{
			printf("+");
			out = 0;
		}	
		i++;
	}
	return (out);
}

int	main(void)
{
	int	salida;

	char	a[15] = {"ABCDEFGHIJ"};
	char	b[15]={"1234567890"};
	char	c[16]={"abcdefghij"};
	char	d[]={};

	salida  = ft_str_is_lowercase(c);
	printf("car alpha(1minus/0otros): %d-%s", salida, a);
	return (0);
}