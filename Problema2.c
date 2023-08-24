// Problema 2

#include <stdio.h>

int main(){
    float numero;

    printf("Ingrese el numero del que desea saber su tabla de multiplicar:\n");scanf("%f", &numero);
    printf("\n%.2f * 1 = %.2f\n", numero, (numero * 1));
    printf("%.2f * 2 = %.2f\n", numero, (numero * 2));
    printf("%.2f * 3 = %.2f\n", numero, (numero * 3));
    printf("%.2f * 4 = %.2f\n", numero, (numero * 4));
    printf("%.2f * 5 = %.2f\n", numero, (numero * 5));
    printf("%.2f * 6 = %.2f\n", numero, (numero * 6));
    printf("%.2f * 7 = %.2f\n", numero, (numero * 7));
    printf("%.2f * 8 = %.2f\n", numero, (numero * 8));
    printf("%.2f * 9 = %.2f\n", numero, (numero * 9));


    return 0;
}