/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:22:08 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/23 09:29:35 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_print_alphabet(void)
{
	int		i;
	char	carac;

	i = 'a';
	while (i <= 'z')
	{
		carac = i ;
		write(1, &carac, 1);
		i++;
	}
}
