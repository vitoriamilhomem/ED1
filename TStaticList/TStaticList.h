#ifndef TSTATIC_LIST_H
#define TSTATIC_LIST_H
#include <stdbool.h>

#include "Contato.h"

typedef struct _list TStaticList;
/**
 * Cria instâncias de uma lista estática
 * @param unsigned int Tamanho desejado para a lista
 * @return TStaticList*
 */
TStaticList* SList_create(unsigned int);
/**
 * Faz a inserção de um elemento no fim da lista.
 * @param TStaticList* list
 * @param Contato contato a ser armazenado na lista
 * @return boolean informando se a operação foi sucesso
 */
bool SList_insert_end(TStaticList*, Contato);
/**
 * Imprime a lista estática
 * @param TStaticList* list
 */
bool SList_insert_begin(TStaticList*, Contato);
/**
 * Abre espaço para o novo
 * @param TStaticList* list
 */
void SList_print(TStaticList*);
/**
 * Informa se a lista está cheia
 * @param TStaticList* list
 * @return boolean 
 */
bool SList_is_full(TStaticList*);

#endif
