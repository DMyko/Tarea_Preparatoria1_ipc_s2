// Problema 13

#include <stdio.h> 

int main (){
    int numero;

    printf("Ingrese el numero que desea analizar: ");scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("\t---El numero es par---");
    }
    else {
        printf("\t---El numero es impar---");
    }

    return 0; 
}