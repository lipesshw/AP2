#include <stdio.h>
#include "PELL.h"

int main() {
    int n;

    printf("Digite o valor de N para obter o N-ésimo número de Pell: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, insira um número não negativo.\n");
    } else {
        int resultado = pell(n);
        printf("O %d-ésimo número de Pell é: %d\n", n, resultado);
    }

    return 0;
}
