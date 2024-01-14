#include <stdio.h>
#include "tribonacci.h"


int main() {
    int n;

    printf("Digite o valor de N para calcular o N-ésimo número Tribonacci: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O valor de N deve ser não-negativo.\n");
    } else {
        int resultado = tribonacci(n);
        printf("O %d-ésimo número Tribonacci é: %d\n", n, resultado);
    }

    return 0;
}
