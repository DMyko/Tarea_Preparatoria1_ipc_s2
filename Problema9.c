// Problema 9

#include <stdio.h>

int main(){
    int i, numero, x=0, y=1, z=1;

    printf("Introduzca los terminos que desea saber de la serie: \n");scanf("%i",&numero);

    for(i=1;i<=numero;i++){
        z = x + y;
        x =  y;
        y =  z;

        printf("%i - ", z);
    }


    return 0; 
}