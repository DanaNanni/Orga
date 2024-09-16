#include <stdio.h>
#include <stdlib.h>
//VERDADERO = 1;
//FALSO = 0;

void ordenAscendente(int n, int arreglo[]){
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                // Intercambiar arreglo[j] y arreglo[j + 1]
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}

int estaElem(int n, int arreglo[], int m){
    for(int i = 0; i < m; i++){
        if(n == arreglo[i])
            return 1;
    }
    return 0;
}

int intercalarOrdenado(int a1[], int a2[], int arreglo[], int n, int m){
        int p1 = 0, p2 = 0, cant = 0;
        while(p1 < n && p2 < m){
            if(estaElem(a1[p1], arreglo, p1 + p2) == 0){
                if(a1[p1] < a2[p2]){
                    arreglo[cant] = a1[p1];
                    p1++;
                    cant++;
                }
                else
                    if(estaElem(a2[p2], arreglo, p1 + p2) == 0){
                        if(a2[p2] < a1[p1]){
                            arreglo[cant] = a2[p2];
                            p2++;
                        }else
                            if(a2[p2] == a1[p1]){
                                arreglo[cant] = a1[p1];
                                p1++;
                                p2++;
                            }
                        cant++;
                    }else
                        p2++;
            }else
                p1++;
        }
        while(p1 < n){
            if(estaElem(a1[p1], arreglo, p1 + p2) == 0){
                arreglo[cant] = a1[p1];
                p1++;
                cant++;
            }else
                p1++;
        }
        while(p2 < m){
            if(estaElem(a2[p2], arreglo, p1 + p2) == 0){
                arreglo[cant] = a2[p2];
                p2++;
                cant++;
            }else
                p2++;
        }
        return cant;
}

int main(){

    int n, m;

    printf("Ingresar la cantidad de elementos del primer arreglo: ");
    scanf("%i", &n);
    int a1[n];
    printf("Ingresar la secuencia de numeros: \n");
    for(int i = 0; i < n; i++){
        scanf("%i", &a1[i]);
    }

    ordenAscendente(n, a1);

    printf("\nIngresar la cantidad de elementos del segundo arreglo: ");
    scanf("%i", &m);
    int a2[m];
    printf("Ingresar la secuencia de numeros: \n");
    for(int i = 0; i < m; i++){
        scanf("%i", &a2[i]);
    }

    ordenAscendente(m, a2);

    int arreglo[n + m];

    printf("El arreglo resultante es : (");
    int tamano = intercalarOrdenado(a1, a2, arreglo, n, m);
    for(int i = 0; i < tamano; i++){
        printf(" %i ", arreglo[i]);
        if(i != tamano - 1)
            printf("-");
    }
    printf(")");

    printf("\n");
    return 0;
}
