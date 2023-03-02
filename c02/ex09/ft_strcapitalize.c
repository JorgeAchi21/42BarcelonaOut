/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:35:42 by jachiaga          #+#    #+#             */
/*   Updated: 2023/03/02 16:20:52 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		//printf("\n[pos:%i.i:%c.+1:%c]", i, str[i] ,str[i + 1]);

		if ((str[i] >= 'a' && str[i] <= 'z') && (i == 0)) //primer caracter
		{
			//printf(".1.");
			str[i] = str[i] - 32;
		}

		if(str[i] >= ' ' && str[i] <= '~')
		{
			if ((str[i] >= '0' && str[i]<='9') ||
				(str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
			{
			}
			else
			{
				if (str[(i + 1)] >= 'a' && str[(i + 1)] <= 'z')
				{
					//printf(".up.");
					str[(i+1)] = str[(i+1)] - 32;
				}
			}
			if (str[i] >= 'A' && str[i] <= 'Z') //resto de palabra en minusculas
			{
				str[i] = str[i] + 32;
			}
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char str_ok[]={"+s?al?ut, c,o.mment tU vAS ? 42mots quarante-deux; cinquante+et+un"}; //bien
	char str[]={"+s?al?ut, c,o.mment tU vAS ? 42mots quarante-deux; cinquante+et+un"}; //mal

	//out = ft_strcapitalize(str);
	//printf("\nori...:%s",strok);
	printf("\nOrigen:%s.", str_ok);
	printf("\nSalida:%s.", ft_strcapitalize(str));
	return (0);
}