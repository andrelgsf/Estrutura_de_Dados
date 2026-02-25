#include <stdio.h>
#include <stdlib.h> //permite usar malloc, realloc e free

int** alocarMatriz(int n, int m) { //a função vai retornar um ponteiro para o ponteiro de int, porque int* retornaria uma linha, int** retorna varias linhas
    int **matriz; // declara a variável que vai armazenar o endereço da matriz
    
    // 1. Aloca memória para as linhas (vetor de ponteiros)
    matriz = (int**) malloc(n * sizeof(int*));
    
    if (matriz == NULL) {
        printf("Erro na alocação das linhas.\n");
        return NULL;
    }
    
    // 2. Aloca memória para cada linha (colunas)
    for (int i = 0; i < n; i++) {
        matriz[i] = (int*) malloc(m * sizeof(int));
        
        if (matriz[i] == NULL) {
            printf("Erro na alocação das colunas.\n");
            return NULL;
        }
    }
    
    return matriz;
}
