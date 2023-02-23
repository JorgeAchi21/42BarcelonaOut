/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <jachiaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:49:03 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/22 18:47:29 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	int salida;
	char a[15]={"abcdefghij"};
	char b[15]={"1234567890"};
	char c[16]={"abcd.efghi"};
	char d[]={};
	
	salida  = ft_str_is_lowercase(b);
	printf("car alpha(minus/0otros): %d", salida);
	return (0);
}
