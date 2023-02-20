/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <jachiaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:31:46 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/20 18:49:04 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int tamano;
	tamano = 0;

	char str[11]= "hello67890!";
	
	tamano = ft_strlen(str);
	printf("tamano de la cadena:%d", tamano);
	return (0);
}
