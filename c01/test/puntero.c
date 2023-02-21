/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puntero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:09:46 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/21 08:34:30 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_ft (int *p)
{
	write (1,*p,1);
	return (0);
}

int main (void)
{
	int var;
	int p;

	int = 42;
	p = &var;
	ft_ft(p);
	return(0);
}	

