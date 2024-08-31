#include <stdio.h>
#include <stdlib.h>

int main(void){

    int dia, mes, anio;

    printf("Introduzca una fecha (dia/mes/año): \n");
    scanf("%d %d %d", &dia, &mes, &anio);
    printf("\n");

    int boolean = 0;

    if(dia > 0 && dia < 31){
        if(mes == 2){
            if(dia == 29 && anio % 4 == 0 && anio > -1){
                boolean = 1;
            }
            else{
                if(dia < 29 && anio > -1){
                    boolean = 1;
                }
            }
        }
        else{
            if( mes > 0 && mes < 13 && anio > -1){
                boolean = 1;
            }
        }
    }
    else{
        if(dia < 32){
            if(mes != 2 && tiene30(mes) == 0 && anio > -1){
                boolean = 1;
            }
        }
    }

    printf("La fecha %d/%d/%d ", dia, mes, anio);
    if(boolean == 1)
        printf("es valida");
    else
        printf("no es valida");

    printf("\n");
    system("pause");

    return 0;
}

int tiene30(int m){
        if(m == 4 || m == 6 || m == 9 || m == 11)
            return 1;
        return 0;
    }
