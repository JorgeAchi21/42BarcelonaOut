#include <stdio.h>

// declara el método antes de usarlo para evitar errores: tipos en conflicto para 'factorial'
long factorial(int);

// Ejemplo de uso:
int main()
{
    int fact = 10;

    // Imprime: Factorial de 10 es: 3628800
    printf("Factorial de %d is: %d\n", fact, factorial(fact));

    return 0;
}

// Función que devuelve el factorial de un número
long factorial(int n)
{
    if (n == 0){
        return 1;
    }else{
        return(n * factorial(n-1));
    }
}
