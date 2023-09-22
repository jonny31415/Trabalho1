#include <stdio.h>
#include "functions.h"

// Calcula a soma dos elementos do array
double calcular_soma(double* array, int array_len){
    printf("\nCalcular soma:\n");
    double soma = 0;
    for(int i=0; i<array_len; i++){
        soma += array[i];
    }
    printf("%.2f\n", soma);
    return soma;
}