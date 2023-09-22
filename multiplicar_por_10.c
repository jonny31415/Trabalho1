#include <stdio.h>
#include "functions.h"

// Multiplica cada elemento do array por 10
double* multiplicar_por_10(double* array, int array_len, double* mult_10){
    printf("\nMultiplicar por 10:\n");
    for(int i=0; i<array_len; i++){
        mult_10[i] = 10*array[i];
        printf("%.2f ", 10*array[i]);
    }
    printf("\n");
    return mult_10;
}