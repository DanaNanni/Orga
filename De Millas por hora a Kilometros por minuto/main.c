#include <stdio.h>
#include <stdlib.h>

int main(){

    int milla;
    float kilometros;

    printf("Ingrese la cantidad de millas por hora que desea transformar a kilometros por minutos: \n");
    scanf("%d", &milla);
    printf("\n");

    kilometros = milla*1.609344;

    printf("Las %d millas por hora son %f kilometros por minutos.", milla, kilometros);
    printf("\n");
    return 0;
}
