#include <stdio.h>
#include "saudacao.h"

int hora;

int main() {
    printf("Digite a hora (0-24): ");
    scanf("%d", &hora);

    if (hora < 0 || hora > 24) {
        printf("Valor invalido\n");
        return 1;
    }

    saudacao();

    return 0;
}
