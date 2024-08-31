#include <stdio.h>
#include <stdlib.h>

int palindroma(char sec[], int length, int indice, int aux){
    if((sec[indice] == sec[length - indice])){
        if(length > indice){
            indice++;
            aux = palindroma(sec, length, indice, aux);
        }
    }
    else
        aux++;
    return aux;
}

int main(){

    char sec[100], c;
    int n = 0;

    printf("Ingrese una palabra: \n");
    scanf("%c", &c);
    while(c != '\n'){
        sec[n] = c;
        n++;
        scanf("%c", &c);
    }

    printf("La palabra %s ", sec);
    printf(palindroma(sec, n - 1, 0, 0) == 0 ? "es palindroma." : "no es palindroma.");

    printf("\n");
    return 0;
}
