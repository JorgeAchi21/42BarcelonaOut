/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:31:18 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/13 14:42:08 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void ft_print_numbers ()
{
	int i;
	char carac;
	
	i = 48;
	while (i < 58){
		carac = i ;
		write(1, &carac, 1);
		i++;
	}
}

int	main (void)
{
	ft_print_numbers();
	return (0);
}