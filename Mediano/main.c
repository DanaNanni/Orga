#include <stdio.h>
#include <stdlib.h>

int mediano(int n, int m){
    if(n != 0){
        m = m + (n % 10);
        n = (n / 10);
        if(n != 0){
            m -= (n % 10);
            n = (n / 10);
            m = mediano(n, m);
        }
    }
    return m;
}

int main(){

    unsigned long int n;
    int m = 0;

    printf("Ingrese un numero entero positivo: \n");
    scanf("%d", &n);
    printf("\n");

    m = mediano(n, 0);

    printf("El mediano de %d es %d.", n, m);

    printf("\n");
    return 0;
}
