/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:32:06 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/13 14:40:53 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void ft_print_alphabet ()
{
	int i;
	char carac;
	
	i = 97;
	while (i < 123){
		carac = i ;
		write(1, &carac, 1);
		i++;
	}
}

int	main (void)
{
	ft_print_alphabet();
	return (0);
}