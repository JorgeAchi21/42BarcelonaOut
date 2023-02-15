/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:45:08 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/13 14:54:24 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void ft_is_negative (int number)
{
	if (number >=0 )
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}

int	main (void)
{
	ft_is_negative(35);
	return (0);
}