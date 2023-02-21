/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <jachiaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:50:26 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/21 16:16:52 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tamano;
	int *ptr;
	
	tamano = 15;
	int  str[15]= {1,11,2,10,3,9,4,8,5,7,6,3,14,20};
	ptr = &str[0];

	ft_sort_int_tab(ptr, tamano);
	return (0);
}
