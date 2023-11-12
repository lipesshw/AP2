#include <stdio.h>
#include <string.h>

int main() {
    char texto[51];

    printf("Digite uma string de ate 50 caracteres: ");
    fgets(texto, sizeof(texto), stdin);

    if (texto[strlen(texto) - 1] == '\n') {
        texto[strlen(texto) - 1] = '\0';
    }

    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Exibir comprimento usando strlen\n");
        printf("2. Exibir comprimento sem usar funcao pronta\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Comprimento usando strlen: %lu\n", strlen(texto));
                break;
            case 2: {
                int comprimento = 0;
                while (texto[comprimento] != '\0') {
                    comprimento++;
                }
                printf("Comprimento sem usar funcao pronta: %d\n", comprimento);
                break;
            }
            case 3:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
