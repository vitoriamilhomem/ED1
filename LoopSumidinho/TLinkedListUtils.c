#include "TLinkedListUtils.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct _no{
    int info;
    int posicao;
    struct _no *prox;
} Tno;
struct _lista
{
    Tno* inicio;
};

TLinkedList* criar_lista(){
    TLinkedList* novo = malloc(sizeof(TLinkedList));
    if (novo!=NULL){
        novo->inicio=NULL;
    }
    return novo;
}

Tno* criar_no(int info, int posicao){
    Tno* novo = malloc(sizeof(Tno));
    if (novo!=NULL){
        novo->info=info;
        novo->posicao=posicao;
        novo->prox=NULL;
    }
    return novo;
}

bool adicionar_no_final(TLinkedList* lista, int info, int posicao){
    Tno* novo = criar_no(info, posicao);
    if (novo==NULL) return false;
    if (lista->inicio==NULL)
        lista->inicio = novo;
    else{
        Tno* aux = lista->inicio;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox= novo;
    }
    return true;
}

int TLinkedList_hasLoop(TLinkedList* lista){
    if (lista->inicio == NULL) return 0;

    Tno* slow = lista->inicio;
    Tno* fast = lista->inicio;

    while (fast != NULL && fast->prox != NULL) {
        slow = slow->prox;
        fast = fast->prox->prox;

        if (slow == fast) {  
            slow = lista->inicio;
            int posicao = 1;

            while (slow != fast) {
                slow = slow->prox;
                fast = fast->prox;
                posicao++;
            }
            return posicao;  
        }
    }
    return 0; 
 }

void criarLoop(TLinkedList* lista, int loop) {
    if (lista->inicio == NULL || loop <= 0) return;

    Tno* aux = lista->inicio;
    Tno* loopNode = NULL;
    int pos = 1;

    while (aux->prox != NULL) {
        if (pos == loop) {
            loopNode = aux;
        }
        aux = aux->prox;
        pos++;
    }

    if (loopNode != NULL) {
        aux->prox = loopNode; // Cria o loop
    }
}




