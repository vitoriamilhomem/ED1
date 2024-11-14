#include "EDCarlos.h"
#include <stdlib.h>
#include <stdio.h>

#define MAX 10
struct _stack
{
    unsigned int qty;
    int data[MAX];
};

Stack* stack_create(){
    Stack* stack = malloc(sizeof(Stack));
    if(stack)
        stack->qty = 0;
    return stack;
}
bool stack_push(Stack* stack, int id){
    if(Stack_is_full(stack) || stack == NULL)
        return false;
    stack->data[stack->qty++]=id;
    return true;
}
bool Stack_pop(Stack* stack, Stack* stack2 ,int* aux, int desejada){
    if(Stack_is_empty(stack) || stack == NULL)
        return false;
    while(stack->data[stack->qty-1] != desejada && !Stack_is_empty(stack)){
        *aux = stack->data[--stack->qty];
        printf("%d,", *aux);
        stack_push(stack2, *aux);
    }
    if(Stack_is_empty(stack)){
        printf("underflow\n");
        return false; }

    printf("%d\n", desejada);
    stack->qty--;
    while (!Stack_is_empty(stack2)) {
        stack_push(stack, stack2->data[--stack2->qty]);
    }
    return true;
}
bool Stack_is_full(Stack* stack){
    return stack->qty == MAX;
}
bool Stack_is_empty(Stack* stack){
    return stack->qty == 0;
}
