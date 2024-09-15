#include <stdio.h>
#include <stdlib.h>

//8

int mediano(unsigned long int n, int posicion){ //asumo que posicion siempre inicia en 1
    if(n == 0){
        return 0;
    }else
        if(posicion % 2 == 0){ //posicion es par, se resta
            return mediano((n/10), posicion + 1) - (n % 10);
        }
        else{                          //posicion es impar, se suma
            return mediano((n/10), posicion + 1) + (n % 10);
        }
    }

int main()
{
    unsigned long int n;

    printf("Ingrese un numero entero: \n");
    scanf("%li", &n);
    printf("\n");

    int a = mediano(n, 1);
    printf("El mediano de %li es %i", n, a);
    return 0;
}
