/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:32:30 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/28 15:00:53 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int	i;
	int	out;

	i = 0;
	out = 1;
	while (str[i] != '\0')
	{
		if (str[i]>='a' && str[i]<='z')
		{
			printf(".");	
		}
		else if (str[i]>='A' && str[i]<='Z')	
		{
			printf("-");
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


int ft_str_is_alpha(char *str);

int main(void)
{
	int	salida;
	
	char a[15]={"abcdefghij"};
	char b[15]={"1234567890"};
	char c[16]={"abcd.efghi"};
	char *dest;
	char *src;

	salida  = ft_str_is_alpha(c);
	printf("Car alpha(1car/0variado): %d", salida);
	return (0);
}
