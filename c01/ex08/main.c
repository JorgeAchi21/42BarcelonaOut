/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:50:26 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/23 16:15:33 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
