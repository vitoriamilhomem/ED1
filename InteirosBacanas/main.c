#include "bacana.h"
#include <stdio.h>

int main(void){
    int n1;
    printf("QUAL NÚMERO DESEJA VER SE É BACANA?");
    scanf("%d", &n1);

    bacaninha* solution = criar_lista();
    colocar_final(solution, n1);
    while (n1 >= 10) {
        n1 = soma_quadrados(n1);
        colocar_final(solution, n1);
    }
    printar_valores(solution);
    verificar_bacana(n1);

}
