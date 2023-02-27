/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:55:44 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/27 19:01:39 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	aa;
	int	bb;
	int	*a;
	int	*b;

	aa = 10;
	bb = 20;

	a = &aa;
	b = &bb;
	
	ft_swap (a, b);
	printf("a: %i - b: %i", *a, *b);
	return (0);
}
