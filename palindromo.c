#include "Stack.h"
#include <stdio.h>
#include <string.h>

int main(){
    //Ler a string
    char string[1024];
    int item, x=0;
    fgets(string, 1024, stdin);
    Stack *stack = Stack_create();

    for(int i = 0; i <strlen(string); i++){
        if(string[i] == '\n')
            break;
        else
            Stack_push(stack, string[i]);
    }
    for(int i = 0; i <strlen(string); i++){
        if(string[i] == '\n')
           break;
        Stack_pop(stack, &item);
        if(item != string[i]){
            x=1;
        }
    }
    if(x==0)
        printf("É palindromo\n");
    else
        printf("Não é palindromo\n");
    return 0;
}

//use a stack.c e stack.h
