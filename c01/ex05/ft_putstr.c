/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:21:04 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/27 19:04:10 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

//void	ft_putstr(char *str);

int	main()
{
	char str[]= "12345678901";
	//str[] = "hello";
	
	ft_putstr(str);
	//printf("%d / %d cociente:%d resto:%d", aa , bb, *a, *b);
	return (0);
}
