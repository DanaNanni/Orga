#include <stdio.h>
#include <stdlib.h>

int main(void){
    long int num, num2;
    int h, min, seg;

    printf("Ingrese la cantidad de segundos a convertir: \n");
    scanf("%d", &num);
    printf("\n");

    num2 = num;

    h = num / 3600;
    num = num % 3600;
    min = num / 60;
    seg = num % 60;

    printf("Los %d segundos son %d:%d:%d.", num2, h, min, seg);
    printf("\n");

    return 0;
}
