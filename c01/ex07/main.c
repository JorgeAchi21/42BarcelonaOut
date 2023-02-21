/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <jachiaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:50:26 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/21 11:29:45 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int tamano;
	int *ptr;
	
	tamano = 11;
	
	int  str[11]= {1,2,3,4,5,6,7,8,9,10,11};
	ptr = &str[0];

	ft_rev_int_tab(ptr, 11);
	return (0);
}
