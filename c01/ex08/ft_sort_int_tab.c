/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sor_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <jachiaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:30:37 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/21 16:16:36 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab (int *tab, int size)
{
	printf("size:%d\n", size);	
	int i;
	int ii;
	int swpg;
	i = 0;
	ii = 0;
	while (ii < size - 1)
	{
		while (i <  size - ii - 1)
		{
			printf("%d-%d ",tab[i], tab[i+1]);
			if (tab[i] > tab[i + 1])
			{
				//swaping
				printf("%d-%d ", tab[i],tab[i+1]);
				swpg = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swpg;
				printf("%d-%d ", tab[i],tab[i+1]);
			}
			printf("\n");
			i++;
		}
		i = 0;
		printf("-----\n");
		ii++;
	}
	//mostrar array
	i = 0;
	while (i < size)
	{
		printf ("[pos:%d-val:%d]", i, tab[i]);
		i++;
	}
}

