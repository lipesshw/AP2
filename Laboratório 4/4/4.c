#include <stdio.h>
#include "parimpar.h"


int numero;

int main() {
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (ehImpar(numero)) {
        printf("%d e impar.\n", numero);
    } else {
        printf("%d  par.\n", numero);
    }

    return 0;
}
