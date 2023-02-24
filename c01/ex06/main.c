/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:31:46 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/23 15:55:32 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int	tamano;
	char str[12]= "hello678901!";

	tamano = 0;

	tamano = ft_strlen(str);
	printf("tamano de la cadena:%d", tamano);
	return (0);
}
