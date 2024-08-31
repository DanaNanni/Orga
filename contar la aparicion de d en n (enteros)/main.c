#include <stdio.h>
#include <stdlib.h>

int cant_de_d_en_n(long int n, int d, int c){
    if(n != 0){
        int aux = n % 10;
        n = n / 10;
        c = c + cant_de_d_en_n(n,d,c);
        if(aux == d){
            c++;
        }
    }
    return c;
}

int main()
{

    long int d = 0, n = 0, cont = 0;

    printf("Ingrese un numero entero: \n");
    scanf("%li", &n);
    printf("Ingrese el digito a uscar en %li: \n", n);
    scanf("%i", &d);
    printf("\n");

    cont = cant_de_d_en_n(n, d, 0);

    printf("La cantidad de veces que %i aparece en %d es de %i.",d ,n , cont);

    printf("\n");
    return 0;
}
