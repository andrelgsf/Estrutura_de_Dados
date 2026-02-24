//Escreva um programa que implementa um vetor dinâmico, onde o usu´ario
//come¸ca a digitar n´umeros inteiros positivos e estes s˜ao guardados no vetor.
//Acada momento, o vetor deve possuir tamanho igual ao n´umero de valores
//digitados pelo usu´ario. Quando o usu´ario digitar um n´umero negativo,
//significa que acabou a lista de n´umeros e o programa deve imprimir todos
//eles na tela

#include <stdio.h>
#include <stdlib.h>

int main() {

    int *vetor = NULL;   // ponteiro para a memória na heap
    int tamanho = 0;     // quantidade de números armazenados
    int numero;          // número digitado pelo usuário

    while (1) { //enquanto isso for verdadeiro

        printf("Digite um numero positivo (negativo para encerrar): ");
        scanf("%d", &numero);
//imprime na tela para o usuario digitar um numero e faz a leitura
        if (numero < 0) {
            break;  // Encerra o loop
        }
//condicional para encerrar caso seja menor que 0
        // Aumenta a quantidade lógica de elementos
        tamanho++;
//acrescenta um na variavel tamanho do vetor se o loop nao quebrar
        // Realoca memória para caber o novo elemento
        int *temp = realloc(vetor, tamanho * sizeof(int));

        if (temp == NULL) {
            printf("Erro de alocacao de memoria!\n");
            free(vetor);
            return 1;
        }

        vetor = temp;

        // Armazena o número na última posição
        vetor[tamanho - 1] = numero;
    }

    // Impressão dos valores armazenados
    printf("\nNumeros digitados:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    // Libera memória da heap
    free(vetor);

    return 0;
}
int tamanho = 0; //variável para depois definir o tamanho
int numero; //guardar o numero digitado

    return 0;
}
