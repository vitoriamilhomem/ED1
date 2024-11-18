#include "sequencia.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct _no{
    int id;
    float valor;
    int id_prox;
    struct _no *prox;
} No;

struct sequencia{
    No* inicio;
};

lista_sequencia* criar_lista(){
    lista_sequencia* nova = malloc(sizeof(lista_sequencia));
    if(nova!=NULL){
        nova->inicio=NULL;
    }
    return nova;
}

No* criar_no(lista_sequencia* lista, int id, float valor, int id_prox){
    No* novo = malloc(sizeof(No));
    if(novo!=NULL){
        novo->id=id;
        novo->valor=valor;
        novo->id_prox=id_prox;
        novo->prox=NULL;
    }
    return novo;
}

bool adicionar_final(lista_sequencia* lista, int id, float valor, int id_prox){
    No* novo = criar_no(lista, id, valor, id_prox);
    if(novo==NULL) return false;
    if(lista->inicio==NULL)
        lista->inicio=novo;
    else{
        No* aux = lista->inicio;
        while (aux!=NULL)
            aux=aux->prox;
        aux->prox=novo;
    }
    return true;
}

No* procurar_no(lista_sequencia* lista, int id){
    No* aux = lista->inicio;
    while (aux!=NULL){
        if(aux->id==id)
            return aux;
        aux= aux->prox;
    }
    return aux;
}
