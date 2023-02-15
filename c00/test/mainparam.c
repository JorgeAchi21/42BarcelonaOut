#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int a;
	int b;

	if (argc > 0 )
	{
		printf("Parametros:\n");

		a = atoi (argv[1]);
		b = atoi (argv[2]);

		printf("Param1: %d -param2: %d \n", a, b);

		//llamada a la funcion
		/*
		ft_putchar(a);
		*/

	} 
	else 
	{
		printf("no se han pasado parametros\n");
	}

return(0);

}