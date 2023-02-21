#include <stdio.h>
int  main(void)
{
	int i;
	int a;
	
	/*
	Valor para un int-integer: mínimo es -2,147,483,648 y el máximo 2,147,483,647 (inclusive)
	cuando se multiplica por -1 el maximo, aparece nuevamento como negativo (error)
	*/

	i = -2147483648;
    a = -2147483647;	
	
	i = i * (-1);
	a = a * (-1);

    printf ("%i \n", i);
    printf ("%i ", a);	
	return (0);
}
