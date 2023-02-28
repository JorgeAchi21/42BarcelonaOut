/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:35:42 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/28 16:05:56 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	while (*str)
	{
		if (*str < 'a' && *str > 'z')
			str = str + ' ';
		str++;
	}
	return (str);
}

int	main(void)
{
	char	out[];

	out = 0;
	char str[]={"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
	char strok[]={"Salut, Comment Tu Vas ? 42mots Quarante-deux; Cinquante+Et+Un"};

	out = ft_strcapitalize(str);
	printf("salida mayusculas: %s -\n Salida ori: %s.", out, str);
	return (0);
}