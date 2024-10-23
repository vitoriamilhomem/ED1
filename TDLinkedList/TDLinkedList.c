#include "TDLinkedList.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct _no{
    int info;
    struct _no *prox;
    struct _no *ant;
}TNo;

struct td_linkedlist{
    TNo* inicio;
    TNo* fim;   
};

TDLinkedList* TDLinkedList_create(){
    TDLinkedList* list = (TDLinkedList*)malloc(sizeof(TDLinkedList));
    if(list != NULL){
        list->inicio = NULL;
        list->fim = NULL;
    }
    return list;
}

bool TDLinkedList_insert_end(TDLinkedList* list, int info){
    TNo* novo = (TNo*)malloc(sizeof(TNo));
    if(novo == NULL)
        return false;
    novo->info = info;
    novo->prox = NULL;
    novo->ant = NULL;
    if(list->inicio == NULL){
        list->inicio = novo;
        list->fim = novo;
    }else{
        list->fim->prox = novo;
        novo->ant = list->fim;
        list->fim = novo;
    }
    return true;
}
void TDLinkedList_print(TDLinkedList* list){
    if(list->inicio == NULL)
        return;
    TNo* aux = list->inicio;
    while(aux != NULL){
        printf("%d ",aux->info);
        aux = aux->prox;
    }
    printf("\n");
}
