#ifndef TD_LINKEDLIST_H
#define TD_LINKEDLIST_H
#include <stdbool.h>

typedef struct td_linkedlist TDLinkedList;
TDLinkedList* TDLinkedList_create();
bool TDLinkedList_insert_end(TDLinkedList* list, int info);
void TDLinkedList_print(TDLinkedList* list);
#endif
