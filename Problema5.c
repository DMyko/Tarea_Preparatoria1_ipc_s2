// Problema 5

#include <stdio.h>

int main(){
    int op;
    float g;
    do {
        printf(" \t--- Conversor ---\n");
        printf("\nQue desea hacer?\n");
        printf("1) Celsius-Fahrenheit\n");
        printf("2) Fahrenheit-Celsius\n");
        printf("3) Salir\n");
        scanf("%d",&op);

        switch(op){
            case 1:
            printf("\tCelsius-Fahrenheit\n");
            printf("Introduzca los grados en Celsius\n");
            scanf("%.2f",&g);
            printf("La conversion es: %.2f\n", ((g*1.8)+32));
            break;

            case 2:
            printf("\tFahrenheit-Celsius\n");
            printf("Introduzca los grados en Fahrenheit\n");
            scanf("%.2f",&g);
            printf("La conversion es: %.2f\n", ((g-32)/1.8));
            break;

            case 3:
            printf("\tSalir\n");
            break;

            default:
            printf("\tOpcion invalida. \n");
        }
    } while (op != 3);

    return 0;
}