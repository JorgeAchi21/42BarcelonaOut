/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab_depuracion.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:03:16 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/23 16:16:15 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	ii;
	int	swpg;

	i = 0;
	ii = 0;
	while (ii < size - 1)
	{
		while (i < size - ii - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swpg = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swpg;
				printf("tb: %d-tb+1: %d\n", tab[i], tab[i + 1]);
			}
			i++;
		}
		printf("----\n");
		i = 0;
		ii++;
	}
}
