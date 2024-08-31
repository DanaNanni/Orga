#include <stdio.h>
#include <stdlib.h>

int contador(long int n, int c){
    if(n != 0){
        n = n / 10;
        c = c + contador(n , c);
        c++;
    }
    return c;
}

int main()
{
    long int cant = 0, numero;

    printf("Ingrese un numero entero: \n");
    scanf("%i", &numero);
    printf("\n");

    cant = contador(numero, 0);

    printf("El numero %i tiene %i digitos.", numero, cant);

    printf("\n");
    return 0;
}
