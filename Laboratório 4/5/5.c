#include <stdio.h>
#include "xy.h"

int main() {
    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("\nDigite o valor de y: ");
    scanf("%d", &y);

    printf("\nSoma: %d\n", somar());
    printf("Subtracao: %d\n", subtrair());
    printf("Multiplicacao: %d\n", multiplicar());

    if (y != 0) {
        printf("Divisao: %.2f\n", dividir());
    } else {
        printf("Nao e possível dividir por zero.\n");
    }

    return 0;
}
