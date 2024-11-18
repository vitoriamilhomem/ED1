#include "bacana.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct _no{
    int numero;
    struct _no *prox;
} Tno;

struct _list{
    Tno* inicio;
};

bacaninha* criar_lista(){
    bacaninha* novo = malloc(sizeof(bacaninha));
    if(novo!=NULL){
        novo->inicio=NULL;
    }
    return novo;
}

Tno* criar_no(int numero){
    Tno* novo = malloc(sizeof(Tno));
    if(novo!=NULL){
        novo->numero=numero;
        novo->prox = NULL;
    }
    return novo;
}

bool colocar_final(bacaninha* lista, int numero){
    Tno* novo = criar_no(numero);
    if (novo==NULL) return false;
    if (lista->inicio == NULL){
        lista->inicio = novo;
    }
    else{
        Tno* aux = lista->inicio;
        while(aux->prox!=NULL)
            aux = aux->prox;
        aux->prox=novo;
    }
    return true;
}

void printar_valores(bacaninha* lista){
    Tno* aux = lista->inicio;
    while(aux != NULL){
        printf(" %d,", aux->numero);
        aux = aux->prox;
    }
    putchar('\n');
}

int soma_quadrados(int numero){
    int soma=0;
    while(numero>0){
        int algarismo = numero%10;
        soma+=algarismo * algarismo;
        numero/=10;
    }
    return soma;
}

void verificar_bacana(int num){
    if(num==1)
        printf("bacana");
    else
        printf("non-bacana");
}
