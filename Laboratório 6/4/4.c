#include <stdio.h>
#include "fatorial.h"

int main() {
    int numero;

    printf("Digite um numero N: ");
    scanf("%d", &numero);

    printf("O fatorial quádruplo de %d é: %d\n", numero, fatorialQuadruplo(numero));

    return 0;
}
