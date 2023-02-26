#include <stdio.h>

int longcad(char *);

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

int longcad(char *cad)
{
    char *p=cad;
    while (*p != '\0')
   	 p++;
    return (p-cad);
}
//str to str: also know as atoi
int ft_str_int(char arr[])
{
    int size;
    printf("==inside f==\n");
    size = longcad(arr);
    printf("tam: %i\n", size);
    printf("fnc: %s \n", arr);
    
    int dvdn;
    int dvsr;
    int ccnt;
    int salida;
    salida = 0;
    int i;
    int t;
    i = size;
    while (i>0)
    {
        t = arr[i-1]-'0';
        //printf ("[%i -pos:%c -int:%i]", size, arr[i-1], t);
        salida = salida + (t * ft_power(10, (size - i )));
        printf ("tmp salida:%i", salida);
        i--;
    }
    printf ("\n");
    printf ("Salida: %i \n", salida);
    printf ("==fin f==\n");
    int rst;
    
    return(125);
}

int main() {
	int tam;
	int num;
	tam = 0;
	num = 0;
	int *pnum;
	
	char arr[]="1234";
	char *parr;
	//parr = &arr;
	
	//Imprimir cadena
	tam = longcad(arr);
	printf("cadena: %s\n", arr);
    //cambiar a numero
	num = ft_str_int(arr);
	printf("integer: %i\n", num);
	//printf("%s\n", jose);
	//printf("tamaño: %i", tam);
	return 0;
}