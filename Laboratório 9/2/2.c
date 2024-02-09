#include <stdio.h>

int main() {
    if (rename("dados.txt", "MATRICULADOS.TXT") == 0) {
        printf("O arquivo foi renomeado com sucesso para matriculados.txt.\n");
    } else {
        printf("Erro ao renomear o arquivo.\n");
    }

    return 0;
}
