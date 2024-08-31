#include <stdio.h>
#include <stdlib.h>

int main(){
     int n;
     long int mayor, menor, promedio;

    printf("Ingrese la cantidad de numeros de la secuencia: ");
    scanf("%d", &n);
    printf("\n");

    printf("Ingrese una secuencia de numeros separados por espacios: \n");

    int sec[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &sec[i]);
    }

    printf("\n");

    mayor = sec[0];
    menor = sec[0];
    promedio = sec[0];

    for(int i = 1; i < n; i++){
        if(sec[i] > mayor)
            mayor = sec[i];
        if(sec[i] < menor)
            menor = sec[i];
        promedio = promedio + sec[i];
    }

    printf("El mayor : %d \n", mayor);
    printf("El menos : %d \n", menor);
    printf("El promedio : %d  \n", promedio);

    printf("\n");
    return 0;
}
