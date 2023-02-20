/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <jachiaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:46:18 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/20 15:52:13 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int c;
	int d;
	int *pdiv;
	int *pmod;

	a = 38;
	b = 7;

	pdiv = &c;
	pmod = &d;

	ft_div_mod(a, b, pdiv, pmod);
	printf("%d / %d cociente:%d resto:%d",a , b, *pdiv, *pmod);
	return (0);
}
