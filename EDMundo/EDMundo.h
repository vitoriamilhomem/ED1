#ifndef EDMUNDO_H
#define EDMUNDO_H
#include <stdbool.h>

typedef struct EDMundo EDMundo_list;

EDMundo_list* EDMundoList_create();
bool EDMundo_insert_end(EDMundo_list* list, int info);
bool EDMundo_delet(EDMundo_list* list, int M);
void EDMundo_print(EDMundo_list* list);

#endif
