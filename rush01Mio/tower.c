#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
	char	arr_matrix[4][4];
	char	arr_up[4];
	char	arr_down[4];
	char	arr_right[4];
	char	arr_left[4];

	int i;
	int pos;
	char p;
	int v;
	int h;

	//inicializar array
	h = 0;
	while (h < 4)
	{
		v=0;
		while (v < 4)
		{
			printf("v: %d-h:%d\n", h, v);	
			arr_matrix[h][v]='0';
			v++;
		}
		h++;
	}

	if (argc > 0 )
	{
/*		printf("ok\n");
		printf("          |         |         |  \n");
		printf("000000000011111111112222222222333\n");
		printf("012345678901234567890123456789012\n");
		printf("%s \n", argv[1]);
*/
		i=0;
		while (i < (16*2))
		{
			p = argv[1][i];
			if (p < '1' || p > '4')
			{
				printf ("Error");
				return(1);
			}
			//anadir al array up
			if (i >=0 && i <=6)
			{
				pos = (i/2);
				printf ("%d-%c\n", pos, p);
				arr_up[pos]= p;
			}

			//anadir al array down
			if (i >=8 && i <=14)
			{
				pos = (i/2)-4;
				printf ("%d-%c\n", pos, p);
				arr_down[pos]= p;
			}

			//anadir al array right
			if (i >=16 && i <=22)
			{
				pos = (i/2)-8;
				printf ("%d-%c\n", pos, p);
				arr_right[pos]= p;
			}

			//anadir al array left
			if (i >=24 && i <=30)
			{
				pos = (i/2)-12;
				printf ("%d-%c\n", pos, p);
				arr_left[pos]= p;
			}
			i=i+2;
		}
	}
	else 
	{
		printf("no se han pasado parametros\n");
	}

	i=0;
	while (i<4)
	{
		printf("Up:");
		printf("%d %c \n", i, arr_up[i]);
		i++;
	}
	i=0;
	while (i<4)
	{
		printf("down:");
		printf("%d %c \n", i, arr_down[i]);
		i++;
	}
	i=0;
	while (i<4)
	{
		printf("Right:");
		printf("%d %c \n", i, arr_right[i]);
		i++;
	}
	i=0;
	while (i<4)
	{
		printf("Left:");
		printf("%d %c \n", i, arr_left[i]);
		i++;
	}

	//buscar 4 UP
	i = 0;
	while (i < 4)
	{
		if (arr_up[i]=='4')
		{
			printf("entro...up ;-)\n");
			arr_matrix[i][0] = '1';
			arr_matrix[i][1] = '2';
			arr_matrix[i][2] = '3';
			arr_matrix[i][3] = '4';
		}
		i++;
	}
	//buscar 4 DOWN
	i = 0;
	while (i < 4)
	{
		if (arr_down[i]=='4')
		{
			printf("entro...down ;-)\n");
			arr_matrix[i][3] = '1';
			arr_matrix[i][2] = '2';
			arr_matrix[i][1] = '3';
			arr_matrix[i][0] = '4';
		}
		i++;
	}
	//buscar 4 RIGHT
	i = 0;
	while (i < 4)
	{
		if (arr_right[i]=='4')
		{
			printf("entro...right ;-)\n");
			arr_matrix[3][i] = '1';
			arr_matrix[2][i] = '2';
			arr_matrix[1][i] = '3';
			arr_matrix[0][i] = '4';
		}
		i++;
	}
	//buscar 4 LEFT
	i = 0;
	while (i < 4)
	{
		if (arr_left[i]=='4')
		{
			printf("entro...right ;-)\n");
			arr_matrix[0][i] = '1';
			arr_matrix[1][i] = '2';
			arr_matrix[2][i] = '3';
			arr_matrix[3][i] = '4';
		}
		i++;
	}
	//buscar 1
	int j;
	j = 0;
	

	while (j <3)
	{
		if (arr_left[j] == '1')
			arr_matrix[0][j] = '4';
		j++;

	}

	//impresion solucion
	v = 0;
	while (v < 4)
	{
		h = 0;
		while (h < 4)
		{
			printf("%c ", arr_matrix[h][v]);
			h++;
		}
		printf("\n");
		v++;
	}
	return(0);
}