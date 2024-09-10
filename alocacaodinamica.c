/**#include <stdio.h>
void print_int(void *x){
    int *pint = (int*)x;
    printf("%d", *pint);
}
void print_array(void *V, unsigned int size, unsigned int n, void (*print)(void*)){
    for(int i=0; i<n; i++){
        print(V+i*size);
        putchar(',');
    }
    putchar('\n');
}
int main(){
    int V[] = {0, 1, 2, 3, 4};
    print_array(V, sizeof(int), 5, print_int);
    return 0;
}


#include <stdio.h>
void print_int(void *x){
    int *pint = (int*)x;
    printf("%d", *pint);
}
void print_float(void *x){
    float *pint = (float*)x;
    printf("%f", *pint);
}
void print_string(void *x){
    char *pint = (char*)x;
    printf("%s", *pint);
}
void print_array(void *V, unsigned int size, unsigned int n, void (*print)(void*)){
    for(int i=0; i<n; i++){
        print(V+i*size);
        putchar(',');
    }
    putchar('\n');
}
int main(){
    int V[] = {0, 1, 2, 3, 4};
    float F[] = {1.1, 1.2, 1.3, 1.4, 1.5};
    char[36] strings = {"a", "vivi", "é", "linda", "!!!"};
    print_array(V, sizeof(int), 5, print_int);
    print_array(F, sizeof(float), 5, print_float);
    print_array(strings, sizeof(string), 5, print_string);
    return 0;
}*/


#ifndef MYFUNC_H
#define MYFUNC_H
/**
*Calcula o n-esimo termo da sequencia de fibonacci
*@param unsigned int n
*@return unsigned int o valor do n-esimo termo
*
*/
