/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:31:18 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/13 14:36:46 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void ft_print_reverse_alphabet ()
{
	int i;
	char carac;
	
	i = 122;
	while (i > 96){
		carac = i ;
		write(1, &carac, 1);
		i--;
	}
}

int	main (void)
{
	ft_print_reverse_alphabet();
	return (0);
}