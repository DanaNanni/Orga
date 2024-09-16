#include <stdio.h>
#include <stdlib.h>

void reemplazar(int arr[], int a, int n){
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] == a)
            arr[i] = n;
    }
}

void reemplazarPuntero(int * arr, int a, int n, int size){
    for(int i = 0; i < size; i++){
        if(*(arr + i) == a)
            *(arr +i) = n;
    }
}

int main(){

    int size, a, n;

    printf("Ingrese la cantidad de numeros del arreglo: \n");
    scanf("%i", &size);

    int arr[size];

    printf("Ingrese una secuencia de numeros enteros: \n");
    for(int i = 0; i < size; i++){
        scanf("%i", &arr[i]);
    }

    printf("Ingrese el numero a reemplazar: \n");
    scanf("%i", &a);

    printf("Ingrese el numero que debe reemplazar a %i: \n", a);
    scanf("%d", &n);
    printf("\n");

    reemplazar(arr, a, n);

    printf("El resultado es: (");
    for(int i = 0; i < size; i++){
        printf(" %i ", arr[i]);
        if(i < size-1)
            printf("-");
    }
    printf(")\n");

    printf("Ingrese un nuevo numero para reemplazar: \n");
    scanf("%i", &a);

    printf("Ingrese un nuevo numero para intercambiar con %i: \n", a);
    scanf("%i", &n);
    printf("\n");

    reemplazarPuntero(arr, a, n, size);

    printf("El resultado es: (");
    for(int i = 0; i < size; i++){
        printf(" %i ", arr[i]);
        if(i < size-1)
            printf("-");
    }
    printf(")");

    printf("\n");
    return 0;
}
