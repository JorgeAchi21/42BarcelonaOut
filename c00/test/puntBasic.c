/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puntBasic.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <jachiaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 08:48:14 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/17 09:05:49 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main (void)
{
	int a = 10; //declaracion de variable
	int *p; //declaracion de variable puntero
	p = &a; //asignacion a variable puntero de addr de a

	printf ("valor de a=%d\n", a);
	printf ("direccion de a &a=%d\n", &a);

	printf ("\n\n");
	
	printf ("valor de p=%d\n", p);
	printf ("direccion de p &p=%d\n", &p);
	printf ("valor apuntado p *p=%d\n", *p);

}
