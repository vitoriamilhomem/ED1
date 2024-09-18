#include "TStaticList.h"
#include "Contato.h"
#include <stdio.h>

int menu()
{
    int op;
    printf("1 - Inserir\n2 - Exibir agenda\n3 - Inserir o início\n0 - Sair");
    printf("\nSua opcao: ");
    scanf("%d", &op);
    return op;
}

int main()
{
    TStaticList *list = SList_create(3);
    int op;
    Contato temp;
    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            temp = Contato_ui_novo();
            puts(SList_insert_end(list, temp) ? "Cadastrado com sucesso!" : "Agenda cheia!");
            break;
        case 2:
            SList_print(list);
            break;
        case 3:
            temp = Contato_ui_novo();
            puts(SList_insert_begin(list, temp) ? "Cadastrado com sucesso!" : "Agenda cheia!");
            break;
        case 0:
            puts("Bye!");
        }
    } while (op != 0);
    return 0;
}
