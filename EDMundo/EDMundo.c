#include "EDMundo.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct _no
{
    int info;
    struct _no* prox;
} TNo;

struct EDMundo{
    TNo* inicio;
};

TNo* Create_NO(int info){
    TNo* novo = malloc(sizeof(TNo));
    if (novo!=NULL){
        novo->info = info;
        novo->prox = NULL;
    }
    return novo;
}

EDMundo_list* EDMundoList_create(){
    EDMundo_list* list = malloc(sizeof(EDMundo_list));
    if(list!= NULL){
        list->inicio = NULL;
    }
    return list;
}

bool EDMundo_insert_end(EDMundo_list* list, int info){
    TNo* novo = Create_NO(info);
    if (novo == NULL) return false;

    if (list->inicio == NULL){
        novo->prox = novo;
        list->inicio = novo;
    }
    else{
        TNo* AUX = list->inicio;
        while(AUX->prox != list->inicio)
            AUX = AUX->prox;
        AUX->prox = novo;
        novo->prox = list->inicio;
    }
    return true;
}

bool EDMundo_delet(EDMundo_list* list, int M){
    TNo* AUX = list->inicio;
    TNo* AUX2;
    for(int i=1; i<=M; i++){
        AUX2 = AUX;
        AUX = AUX->prox;
    }
    AUX2->prox = AUX->prox;
    list->inicio = AUX->prox;
    free(AUX);
    return true;
}

void EDMundo_print(EDMundo_list* list){
    if(list->inicio==NULL)
        return;
    TNo* aux = list->inicio;
    do{
        printf("%d ", aux->info);
        aux = aux->prox;
    }while(aux!= list->inicio);
}
