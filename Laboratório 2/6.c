#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];

    printf("Digite o nome: ");
    scanf("%s", nome);

    if (strlen(nome) >= 4) {
        printf("As 4 primeiras letras do nome sao: %.4s\n", nome);
    } else {
        printf("O nome tem menos de 4 letras: %s\n", nome);
    }

    return 0;
}
