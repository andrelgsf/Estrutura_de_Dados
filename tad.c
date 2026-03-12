#include <stdio.h>

typedef struct Lista {
    int dados[10];
    int tamanho;
} Lista;

void inserir(Lista *lista, int valor){
    lista->dados[lista->tamanho] = valor;
    lista->tamanho++;
    }
     void remover(Lista *lista){
        lista->tamanho--;
}
int buscar(Lista *lista, int valor){
    for(int i = 0; i < lista->tamanho; i++){
        if(lista->dados[i] == valor){
            return i;
        }
    }
     return -1;
}
int main(){

    Lista listagem;

    listagem.tamanho = 0;

    inserir(&listagem, 10);
    inserir(&listagem, 20);
    inserir(&listagem, 30);
    
    remover(&listagem);
    
    int resultado = buscar(&listagem, 20);
    printf("Posição: %d", resultado);

    for(int i = 0; i < listagem.tamanho; i++){
        printf("%d ", listagem.dados[i]);
    }

}
