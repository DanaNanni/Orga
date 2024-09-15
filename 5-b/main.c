#include <stdio.h>
#include <stdlib.h>

void ordenAscendente(int n, int arreglo[]){
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                // Intercambiar arreglo[j] y arreglo[j + 1]
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}

int main(){

    int n, arreglo[100];
    printf("Ingrese el numero(entero) de elementos: \n");
    scanf("%i", &n);
    printf("\n");

    printf("Ingrese una secuencia de numeros enteros: \n");
    for( int i = 0; i < n; i++){
        scanf("%i", &arreglo[i]);
    }
    printf("\n");

    ordenAscendente(n, arreglo);

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
