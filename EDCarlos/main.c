#include "EDCarlos.h"
#include <stdio.h>
int main(){
    int id, temp;
    char pedido;
    Stack *principal = stack_create();
    Stack *secundaria = stack_create();
    do{
        scanf(" %c %d", &pedido, &id);
        if(pedido == 'i'){
            if(!stack_push(principal, id))
                printf("overflow\n");
        }
        else if(pedido == 'r'){
            Stack_pop(principal,secundaria,&temp,id);
        }
    }while (pedido != '0' || id != 0);
    return 0;
}
