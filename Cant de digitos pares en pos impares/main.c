#include <stdio.h>
#include <stdlib.h>

int contadorDePares(long int n, int c){
    if(n != 0){
        int aux = (n % 10);
        n = n / 10;
        if(n != 0){
            n = n / 10;
            c = c + contadorDePares(n, c);
        }
        if(aux % 2 == 0){
            c++;
        }
    }
    return c;
}
int main(){

    long int n = 0, cant = 0;

    printf("Ingresar un numero entero: \n");
    scanf("%i", &n);
    printf("\n");

    cant = contadorDePares(n, 0);

    printf("El numero %i tiene %i digitos en posiciones impares.", n, cant);

    printf("\n");
    return 0;
}
