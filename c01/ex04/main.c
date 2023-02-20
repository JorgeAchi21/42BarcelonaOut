/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <jachiaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:59:59 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/20 17:18:19 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
