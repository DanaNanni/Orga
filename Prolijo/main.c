#include <stdio.h>
#include <stdlib.h>

int ascendente(long long int n, int m, int aux){
    if(n != 0){
        if((n % 10) > m){
            m = n % 10;
            n /= 10;
            aux = ascendente(n, m, aux);
        }
        else
            aux++;
    }
    return aux;
}

int descendente(long long int n, int m, int aux){
    if(n != 0){
        if((n % 10) < m){
            m = n % 10;
            n /= 10;
            aux = descendente(n, m, aux);
        }
        else
            aux++;
    }
    return aux;
}


int main(){

    long long int n, aux = 0;

    printf("Ingrese un numero entero: \n");
    scanf("%lli", &n);
    printf("\n");

    if((ascendente(n, -1, 0) == 0) || (descendente(n / 10, n % 10, 0) == 0)){ // si ascendente o decendente es = 0, significa que es verdadero.
        aux = 1;
    }

    printf("El numero %lli ", n);
    printf(aux == 1 ? "es prolijo" : "no es prolijo"); //1 es verdadero, 0 es falso.

    printf("\n");
    return 0;
}
