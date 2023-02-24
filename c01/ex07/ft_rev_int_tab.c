/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:45:58 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/23 15:37:22 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	b;

	i = 0;
	while (i < size / 2)
	{
		b = tab[i];
		tab[i] = tab[size -(i + 1)];
		tab[size - i] = b;
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		i++;
	}
}
