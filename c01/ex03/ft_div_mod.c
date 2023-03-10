/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:46:18 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/27 19:02:42 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include	<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int c;
	int d;
	int *div;
	int *mod;

	a = 38;
	b = 7;

	div = &c;
	mod = &d;

	ft_div_mod(a, b, div, mod);
	printf("%d / %d cociente:%d -resto:%d",a , b, *div, *mod);
	return (0);
}
