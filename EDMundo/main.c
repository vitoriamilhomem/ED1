#include "EDMundo.h"
#include <stdio.h>

int main(){
    int n, m;
    EDMundo_list* list = EDMundoList_create();

    printf("DIGITE O TOTAL DE SOLDADOS: \n");
    scanf("%d", &n);
    printf("DIGITE O TOTAL DE PASSADAS: \n");
    scanf("%d", &m);

    for(int i = 1; i<=n; i++){
        EDMundo_insert_end(list, i);
    }
    for(int i = 1; i<n; i++){
        EDMundo_delet(list, m);
    }
    EDMundo_print(list);
}
