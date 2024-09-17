#include <stdio.h>
#include <stdlib.h>

void invertir_arr_num(int arr [], int size){
    int f = 0, c = size-1;
    int aux;
    while(f < c){
        aux = arr[f];
        arr[f++] = arr[c];
        arr[c--] = aux;
    }
}

void invertir_arr_punt(int * arr[], int size){
    int **cola = arr + size - 1;
    int *aux;
    while(cola != arr){
        aux = *arr;
        *arr = *cola;
        *cola = aux;
        arr++;
        cola--;
    }
}

int main(){
    int longitud = 3;
    int arr_num [longitud];
    int * arr_punt [longitud];

    // INICIALIZACI´ ON
    int i = 0;
    for(i=0; i<longitud; i++){
        arr_num[i] = i+1;
        arr_punt[i] = &arr_num[i];
    }

    // INSTRUCCI´ ON 1
    invertir_arr_num(arr_num, longitud);

    for(int i = 0; i < longitud; i++){
        printf(" %i ", *(arr_punt[i]));
    }
    printf("\n");

    // INSTRUCCI´ ON 2
    invertir_arr_punt(arr_punt, longitud);

    for(int i = 0; i < longitud; i++){
        printf(" %i ", *(arr_punt[i]));
    }
    return 0;
}
