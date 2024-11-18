#include "sequencia.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int id1, id2;
    float dados;

    typedef struct _no No;
    lista_sequencia* lista = criar_lista();
    
    while (1) {
        scanf("%d %f %d", &id1, &dados, &id2);
        if (id1 == 0) break; 
        adicionar_final(lista, id1, dados, id2);
    }

    int id_atual = 1;
    No* no_atual = procurar_no(lista, id_atual); 

    while (no_atual != NULL &&  0) {
        printf("%.1f,");
        no_atual = procurar_no();  
    }
    
    if (no_atual != NULL) {
        printf("%.1f");  
    }
    
    printf("\n");

    return 0;
}
