#ifndef EDCARLOS_H
#define EDCARLOS_H
#include <stdbool.h>

typedef struct _stack Stack;

Stack* stack_create();
bool stack_push(Stack* Stack, int);
bool Stack_pop(Stack* stack, Stack* stack2, int* aux, int desejada);
bool Stack_is_full(Stack* Stack);
bool Stack_is_empty(Stack* Stack);

#endif
