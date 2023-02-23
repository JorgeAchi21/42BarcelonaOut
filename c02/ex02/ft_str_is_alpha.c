/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <jachiaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:32:30 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/22 17:29:03 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_alpha(char *str)
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
	return(out);
}
