/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:58:50 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/27 19:03:20 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	dvdn;
	int	dvsr;

	dvdn = *a;
	dvsr = *b;
	*a = dvdn / dvsr;
	*b = dvdn % dvsr;
}

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int dvdn;
	int dvsr;
	int aa;
	int bb;
	int *a;
	int *b;
	
	dvdn = 38;
	dvsr = 7;
	aa = dvdn;
	bb = dvsr;
	a = &dvdn;
	b = &dvsr;

	ft_ultimate_div_mod(a, b);
	printf("%d / %d cociente:%d resto:%d", aa , bb, *a, *b);
	return (0);
}
