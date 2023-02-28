/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:31:56 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/28 15:05:43 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	out;

	i = 0;
	out = 1;
	while (str[i] != '\0')
	{
		if (str[i]>='0' && str[i]<='9')
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


int ft_str_is_numeric(char *str);

int main(void)
{
	int salida;

	char	a[15]={"abcdefghij"};
	char	b[15]={"1234567890"};
	char	c[16]={"abcd.efghi"};
	char	d[]={};
	char	*dest;
	char	*src;

	salida  = ft_str_is_numeric(c);
	printf("car num(1Dig/0variado): %d", salida);
	return (0);
}
