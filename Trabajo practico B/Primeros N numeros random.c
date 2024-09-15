#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void arregloDeNumAleatorios(int n, int arreglo[]){
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        arreglo[i] = rand();
    }
}

int main(){

    int n, arreglo[100];

    printf("Ingrese un numero entero: ");
    scanf("%i", &n);
    printf("\n");

    arregloDeNumAleatorios(n, arreglo);

    printf("El arreglo es: (");
    for(int i = 0; i < n; i++){
        printf(" %i ", arreglo[i]);
        if( i != n-1)
            printf("-");
    }
    printf(").");
    printf("\n");
    return 0;
}
