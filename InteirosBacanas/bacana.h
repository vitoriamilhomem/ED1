#ifndef BACANA
#define BACANA
#include <stdbool.h>

typedef struct _list bacaninha;

bacaninha* criar_lista();
bool colocar_final(bacaninha* lista, int numero);
void printar_valores(bacaninha* lista);
int soma_quadrados(int numero);
void verificar_bacana(int num);

#endif
