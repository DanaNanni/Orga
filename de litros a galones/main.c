#include <stdio.h>
#include <stdlib.h>

int main(void){

    int litros;
    float galones;

    printf("Ingrese la cantidad de litros que desea transformar en galones: \n");
    scanf("%d", &litros);
    printf("\n");

    galones = litros*0.264172052;

    printf("Los %d litros son %f galones ", litros, galones);
    printf("\n");

    return 0;
}
