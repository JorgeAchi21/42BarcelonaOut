/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <jachiaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:31:56 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/22 17:47:53 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int i;
	int out;

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
	return(out);
}
