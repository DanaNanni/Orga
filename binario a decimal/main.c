#include <stdio.h>
#include <stdlib.h>

int main(){

    long int binario, decimal, aux;

    printf("Ingrese un numero binario: \n");
    scanf("%d", &binario);
    printf("\n");
    aux = binario;

    int aux2,base = 1;
    decimal = binario % 10;
    binario = binario / 10;

    while(binario != 0){
        aux2 = 1;
        for(int i = 0; i < base; i++){
            aux2 = aux2*2;
        }
        decimal = decimal + ((binario % 10) * aux2);
        binario = binario / 10;
        base++;
    }

    printf("El numero binario %d es %d en decimal.", aux, decimal);

    printf("\n");
    return 0;
}
