#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main(int argc, char* argv[]){
    if(argc == 1){
        fprintf(stderr, "Insira os numeros do array. Para ajuda digite --help\n");
        return 2;
    }
    else if(argc == 2 && !strcmp(argv[1], "--help")){
        printf("Digite os numeros no qual as funcoes serao aplicadas.\n");
        printf("Funcoes a serem aplicadas: ");
        printf("Elevar ao quadrado, Multiplicar por 10, Calcular soma.\n");
        printf("Exemplo de uso: ./main 1 5 3 2\n");
        return 1;
    } 
    else{
        int array_len = argc-1; // Comprimento do array inserido
        // Define array e copia os valores de argv
        double* array = (double*)malloc(array_len*sizeof(double));
        for(int i=0; i<array_len; i++){
            array[i] = atoi(argv[i+1]);
        }
        // Define arrays para as funções
        double* quadrado = (double*)malloc(array_len*sizeof(double));
        double* mult_10 = (double*)malloc(array_len*sizeof(double));
        quadrado = elevar_ao_quadrado(array, array_len, quadrado);
        mult_10 = multiplicar_por_10(array, array_len, mult_10);
        int soma = calcular_soma(array, argc-1);

        // Desaloca a memória
        free(array);
        free(quadrado);
        free(mult_10);

        return 0;
    }
}