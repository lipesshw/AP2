#include <stdio.h>

int main() {
    FILE *arquivo;
    arquivo = fopen("dados.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    for (int i = 0; i <= 100; i += 10) {
        fprintf(arquivo, "%d\n", i);
    }

    fclose(arquivo);

    printf("Os números foram escritos no arquivo dados.txt com sucesso.\n");

    return 0;
}
