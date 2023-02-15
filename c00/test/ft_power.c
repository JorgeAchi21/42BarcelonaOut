#include <stdio.h>

int ft_power(a, b)
{
	int i;
	int sal;
	i = 2;
	sal = a;
	if (b == 0 )
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

int main (void)
{
	int a;
	int b;
	int c;
	a = 2;
	b = 6;

	c = ft_power(a, b);
	printf ("%d ^ %d = %d", a, b, c);
	printf ("\n");
	//printf ("hola mundo %d", c);
}
