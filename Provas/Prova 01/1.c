#include <stdio.h>
#include "questoes.h"

int main() {
    int opcao;

    do {
        menu();
        scanf("%d", &opcao);

        switch (opcao) {
            default:
                printf("Opcao invalida.");
            case 0:
                printf("Saindo do programa..");
                break;


            case 1:
                exercicio1();
                break;
            case 2:
                exercicio2();
                break;
        }

    } while (opcao != 0);

    return 0;
}
