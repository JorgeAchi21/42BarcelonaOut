/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <jachiaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:02:34 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/22 17:29:10 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	int salida;
	char a[15]={"abcdefghij"};
	char b[15]={"1234567890"};
	char c[16]={"abcd.efghi"};
	char *dest;
	char *src;
	
	salida  = ft_str_is_alpha(a);
	printf("car alpha(1car/0variado): %d", salida);
	return (0);
}
