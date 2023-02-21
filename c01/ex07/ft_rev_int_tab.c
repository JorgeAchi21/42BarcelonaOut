/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <jachiaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:45:58 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/21 11:29:31 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int b;
	i = 0;
	
	while (i < size/2)
	{
		b = tab[i];
		tab[i] = tab[size-(i+1)];
		tab[size-i] = b;
		i++;
	}
	
	printf ("impresion:\n");
	i = 0;
	while (i < size-1)
	{
		printf("pos: %d -num: %d\n", i, tab[i]);
		i++;
	}
}
