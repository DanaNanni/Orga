#include <stdio.h>
#include <stdlib.h>
//VERDADERO = 1;
//FALSO = 0;

int esAscendente(int n, int arreglo[]){
    int puntero = arreglo[0], bandera = 1;
    for(int i = 1; i < n && bandera == 1; i++){
        if(puntero > arreglo[i])
            bandera = 0;
        else
            puntero = arreglo[i];
    }
    return bandera;
}

int main(){

    int n, arreglo[100];

    printf("Ingresar el numero de elementos: ");
    scanf("%i", &n);
    printf("\n");

    printf("Ingrese una secuencia de numeros enteros: \n");
    for( int i = 0; i < n; i++){
        scanf("%i", &arreglo[i]);
    }
    printf("\n");

    printf("El arreglo ");
    printf(esAscendente(n, arreglo) == 1 ? "esta ordenado de forma ascendente." : "no esta ordenado de forma ascendente.");

    printf("\n");
    return 0;
}
