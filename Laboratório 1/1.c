#include <stdio.h>

int main() {
    int escolha;

    while (1) {
        printf("Escolha um exercicio da lista entre 1 a 12: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Voce escolheu o exercicio 1.\n\n");
                break;
            case 2:
                printf("Voce escolheu o exercicio 2.\n\n");
                break;
            case 3:
                printf("Voce escolheu o exercicio 3.\n\n");
                break;
            case 4:
                printf("Voce escolheu o exercicio 4.\n\n");
                break;
            case 5:
                printf("Voce escolheu o exercicio 5.\n\n");
                break;
            case 6:
                printf("Voce escolheu o exercicio 6.\n\n");
                break;
            case 7:
                printf("Voce escolheu o exercicio 7.\n\n");
                break;
            case 8:
                printf("Voce escolheu o exercicio 8.\n\n");
                break;
            case 9:
                printf("Voce escolheu o exercicio 9.\n\n");
                break;
            case 10:
                printf("Voce escolheu o exercicio 10.\n\n");
                break;
            case 11:
                printf("Voce escolheu o exercicio 11.\n\n");
                break;
            case 12:
                printf("Voce escolheu o exercicio 12.\n\n");
                break;
            default:
                printf("Escolha invalida. Tente novamente.\n\n");
                break;
        }
    }

}
