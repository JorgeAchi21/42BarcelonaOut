/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:45:58 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/27 19:06:06 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	b;

	i = 0;
	while (i < size / 2)
	{
		b = tab[i];
		tab[i] = tab[size - (i + 1)];
		tab[size - (i + 1)] = b;
		i++;
	}
}
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tamano;
	int	*ptr;
	int i;
	
	int str[5] = {1,2,8,4,5,};
	tamano = 5;
	//int	str[9] = {18,16,14,12,10,8,6,4,2};
	//tamano = 9;
	//int str[8] = {8,7,6,5,4,3,2,1};
	//tamano = 8;
	ptr = &str[0];
	
	printf("Arr normal...: ");
	i=0;
	while (i <= tamano-1)
	{
		printf("%d.", ptr[i]);
		i++;
	}
	printf("-Tamano: %i\n", tamano);

	ft_rev_int_tab(ptr, tamano);

	printf("Arr invertido: ");
	i=0;
	while (i <= tamano-1)
	{
		printf("%d.", ptr[i]);
		i++;
	}
	printf("-Tamano: %i\n", tamano);
	return (0);
}
