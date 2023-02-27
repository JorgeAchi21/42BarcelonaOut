/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:50:39 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/27 19:00:58 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int	main(void)
{
	int	i;
	i = 2;
	int	*pint;

	pint = &i;
	ft_ft (pint);
	printf("%d , numero ", i );
	return (0);
}
