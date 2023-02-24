/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:50:26 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/23 15:42:48 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tamano;
	int	*ptr;
	int i;
	int	str[11] = {1,2,3,4,5,6,7,8,9,10,11};

	tamano = 11;

	ptr = &str[0];

	ft_rev_int_tab(ptr, 11);
	i=0;
	printf("arr invertido: ");
	while (i < 11)
	{
		printf("%d", ptr[i]);
		i++;
	}
	return (0);
}
