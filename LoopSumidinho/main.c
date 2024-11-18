#include "TLinkedListUtils.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int testes, dados, loop, numero;

    printf("número de testes: ");
    scanf("%d", &testes);
    
    for (int i = 0; i < testes; i++)
    {
        printf("quantidade de dados da lista: ");
        scanf("%d", &dados);
        printf("onde ocorre o loop: ");
        scanf("%d", &loop);

        int elementos[dados];
        TLinkedList* lista = criar_lista();
        for (int i = 0; i < dados; i++)
        {
            printf("elemento %d: ", i);
            scanf("%d", &elementos[i]);
            adicionar_no_final(lista, elementos[i], i+1);
        }
    }
    

}
