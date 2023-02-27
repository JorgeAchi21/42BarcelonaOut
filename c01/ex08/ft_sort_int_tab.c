/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:03:16 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/27 19:06:49 by jachiaga         ###   ########.fr       */
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
			}
			i++;
		}
		i = 0;
		ii++;
	}
}

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	size;
	int	i;
	int	*ptr;

	size = 15;
	int	str[15] = {30, 28, 26, 24, 22, 20, 18, 16, 14, 12, 10, 8, 6, 4, 2};
	ptr = &str[0];

	ft_sort_int_tab(ptr, size);

	i = 0;
	while (i < size)
	{
		printf("[p:%d - %d]", i, ptr[i]);
		i++;
	}
	return (0);
}
