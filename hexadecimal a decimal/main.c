#include <stdio.h>
#include <stdlib.h>

int main(){

    char c, hexa[100];
    int aux = 1, i = 0, actual = 0, a = 0;
    long int deci = 0;

    printf("Ingrese un el numero hexadecimal: \n");
    c = getchar();

    while(c != '\n'){
        hexa[i] = c;
        c = getchar();
        i++;
    }

    while(i != 0){
        for(int j = 1; j < i; j++){
            aux = aux*16;
        }

        switch(hexa[actual]){
            case '0': a = 0; break;
            case '1': a = 1; break;
            case '2': a = 2; break;
            case '3': a = 3; break;
            case '4': a = 4; break;
            case '5': a = 5; break;
            case '6': a = 6; break;
            case '7': a = 7; break;
            case '8': a = 8; break;
            case '9': a = 9; break;
            case 'a': a = 10; break;
            case 'A': a = 10; break;
            case 'b': a = 11; break;
            case 'B': a = 11; break;
            case 'c': a = 12; break;
            case 'C': a = 12; break;
            case 'd': a = 13; break;
            case 'D': a = 13; break;
            case 'e': a = 14; break;
            case 'E': a = 14; break;
            case 'f': a = 15; break;
            case 'F': a = 15; break;
            default: a = 0; break;
        }
        deci = deci + a*aux;
        i--;
        actual++;
        aux = 1;
    }


    printf("El resultado es %d.", deci);

    printf("\n");
    return 0;
    }
