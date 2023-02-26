/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pasoparam.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:46:54 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/26 18:21:21 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	longcad(char *cad)
{
	char	*p;

	p = cad;
	while (*p != '\0')
		p++;
	return (p - cad);
}

int	ft_power(a, b)
{
	int	i;
	int	sal;

	i = 2;
	sal = a;
	if (b == 0)
		return (1);
	if (b == 1)
		return (a);
	while (i <= b)
	{
		sal = sal * a;
		i++;
	}
	return (sal);
}

//str to str: also know as atoi
int	ft_str_int(char arr[])
{
	int	size;
	int	salida;
	int	i;
	int	t;

	size = longcad(arr);
	salida = 0;
	i = size;
	while (i > 0)
	{
		t = arr[i - 1] - '0';
		salida = salida + (t * ft_power(10, (size - i)));
		i --;
	}
	return (salida);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	num;

	i = 0;
	if (argc > 1)
	{
		while (i++ < argc)
		{
			printf("param num:%i -", i);
			printf("param val:%s\n", argv[i]);
			if (argv[i] == NULL)
				printf("nulo");
			else if (argv[i][0] >= '0' && argv[i][0] <= '9')
			{
				num = ft_str_int(argv[i]);
				printf("conversion a num:%i\n", num);
			}
		}
	}
	else
	{
		printf("No param");
	}
	return (0);
}
