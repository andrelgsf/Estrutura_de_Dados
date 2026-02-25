#include <stdio.h>

void swap_ranges(int *a_begin, int *a_end, int *b_begin) { //função que possui 3 ponteiros, dois limitando o espaço do primeiro e outro para realizar a troca
    
    while (a_begin < a_end) { //enquanto eu ainda estiver no primeiro intervalo
        
        int temp = *a_begin; //guardo temporariamnete o valor no começo do primeiro intervalo
        *a_begin = *b_begin; //troco para o segundo intervalo
        *b_begin = temp; //assimilo o valor temporário que antes era de a, para b

        a_begin++;
        b_begin++; //incremento para a próxima posição do vetor
    }
}

//Exemplo de uso
int main() {

    int v[] = {1,2,3,4,5,6,7,8}; //dentro de um vetor criado na main

    // chama a função e troca o endereço da posição 0 do vetor até o endereço da posição 3 a partir do intervalo do bloco do endereço de posição 5
    swap_ranges(&v[0], &v[3], &v[5]);

    for (int i = 0; i < 8; i++) { 
        printf("%d ", v[i]);
        //percorre o vetor e imprime os valores modificados 
    }

    return 0;
}
