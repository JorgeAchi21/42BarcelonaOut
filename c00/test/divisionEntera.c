#include  <unistd.h>

int	main (void)
{
	int a;
	int b;
	int c;
	//al dividir 2 integer retorna un integer
	//sin decimales.
	a=7;
	b=2;
	c = a / b;
	c = c + 48;
	write (1, &c, 1);
	return (0);
}
