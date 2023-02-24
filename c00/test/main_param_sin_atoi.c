#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int str_to_int(char string)
{
	int	out;
	int i;
	int max;
	char car;

	printf("%s -", string);
	max = sizeof(string);
	i = max;
	while (i > 0)
	{
		car = string[i]; 
		printf("%c-", car);
		i--
	}
	out = 0;
	i +
	return (out);
}

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

/*
	if (argc > 0)
	{
		printf("Parametros:\n");

		a = atoi (argv[1]);
		b = atoi (argv[2]);


		printf("Param1: %d -param2: %d \n", a, b);

		//llamada a la funcion
		
		ft_putchar(a);
		

	}
	else
	{
		printf("No se han pasado parametros\n");
	}
*/
str_to_int("hola mundo!!");

return(0);

}