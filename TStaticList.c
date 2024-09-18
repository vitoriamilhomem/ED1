#include "TStaticList.h"
#include <stdio.h>
#include <stdlib.h>
struct _list{
    unsigned int MAX;
    unsigned int qty;
    Contato *data;
};

TStaticList* SList_create(unsigned int size) {
    TStaticList* list = malloc(sizeof(TStaticList));
    if(list!=NULL){
        list->data = malloc(sizeof(Contato)*size);
        if(list->data==NULL){
            free(list);
            return NULL;
        }
        list->qty = 0;
        list->MAX = size;
    }
    return list;
}

bool SList_insert_end(TStaticList* list, Contato info){
    //Checar se tem espaço
    if(SList_is_full(list))
        return false;
    list->data[list->qty] = info;
    list->qty++;
    return true;
}

bool SList_insert_begin(TStaticList* list, Contato info){
    if(SList_is_full(list))
        return false;
    for(int i=list->qty;i>0;i--){
        list->data[i] = list->data[i-1];
    }
    list->data[0] = info;
    list->qty++;
    return true;
}

bool SList_is_full(TStaticList* list){
    return list->qty == list->MAX;
}


void SList_print(TStaticList* list){
    puts("--------------------------");
    for(unsigned int i=0; i<list->qty; i++)
        Contato_print(list->data[i]);
    putchar('\n');
}
