#include <stdio.h>
#include "tribonacci.h"

int main() {
    int n;

    printf("Digite o valor de n para calcular o número Tribonacci: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O valor de n deve ser não-negativo.\n");
    } else {
        int resultado = tribonacci(n);
        printf("O %dº número Tribonacci é: %d\n", n, resultado);
    }

    return 0;
}
