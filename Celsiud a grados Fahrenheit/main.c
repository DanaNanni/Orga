#include <stdio.h>
#include <stdlib.h>

int main(){

    int celsius;
    float farenheit;

    printf("Ingrese la cantidad de grados Celcius que desea convertir en grados Farenheit: \n");
    scanf("%d", &celsius);
    printf("\n");

    farenheit = celsius*33.8;

    printf("Los %d grados Celsius son %f grados Farenheit.", celsius, farenheit);

    printf("\n");

    return 0;
}
