// Problema 7

#include <stdio.h>

int main(){
    int i, numero, factorial = 1;

    printf("Introduzca el numero para encontrar su factorial: \n");scanf("%i",&numero);

    for(i=1;i<=numero;i++){
        factorial *= i;
    }

    printf("\n--- El factorial es: %i---\n", factorial);

    return 0; 
}