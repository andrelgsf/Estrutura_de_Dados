#include <stdio.h>

//declarar a função que vai trocar os endereços das duas variáveis a e b de lugar
void swap(int *a, int *b) {
    //criar uma estrutura que vai assimilar uma variavel ao endereço de a, depois igualar os endereços de a e b, depois igual b a essa mesma variável
    int var = *a;
    *a = *b;
    *b = var;
}
//inicializar as duas variáveis a e b dentro do main com seus respectivos valores
int main() {
    int x = 100;
    int y = 200;
//declarar como esta antes da troca / chamado da função com printf
    printf("Antes da troca: x = %d, y = %d\n", x, y);
//chamar a função swap
    swap(&x, &y);
//printar o resultado depois da troca
    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}
