#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char **argv)
{
	int i=0;
	char  c;

	while (i < 32)
	{
		c = argv[0][i];
		if (c != '\0')
		{
			printf("[%i->%c] ", i, c);
		}
		else
		{
			i=32;
		}
		i++;
	}
	printf("param num: %d\n", argc);
	return(0);
}