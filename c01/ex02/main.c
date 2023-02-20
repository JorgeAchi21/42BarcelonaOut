/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <jachiaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:46:18 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/20 15:09:41 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;
	int *pa;
	int *pb;

	a = 10;
	b = 20;

	pa = &a;
	pb = &b;
	//********pint8 = 50;
	//printf ("%d\n", ********pint8);

	ft_swap (pa, pb);
	return (0);
}
