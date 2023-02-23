/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <jachiaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:49:35 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/22 18:47:22 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int i;
	int out;

	i = 0;
	out = 1;
	while (str[i] != '\0')
	{
		if (str[i]>='a' && str[i]<='z')
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
	return(out);
}
