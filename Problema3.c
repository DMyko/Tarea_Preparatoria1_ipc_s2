// Problema 3

#include <stdio.h>
#include <string.h>

int main(){
    int cantidad;
    char texto[200];

    printf("Ingrese una cadena de texto cualquiera: \n");gets(texto);

    cantidad = strlen(texto);
    
    printf("\n---Su texto contiene una cantidad de %d caracteres.---", cantidad);


    return 0;
}