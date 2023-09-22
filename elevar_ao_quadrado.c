#include <stdio.h>
#include "functions.h"

// Eleva ao quadrado cada elemento do array
double* elevar_ao_quadrado(double* array, int array_len, double* quadrado){
    printf("Elevar ao quadrado:\n");
    for(int i=0; i<array_len; i++){
        quadrado[i] = array[i]*array[i];
        printf("%.2f ", array[i]*array[i]);
    }
    printf("\n");
    return quadrado;
}