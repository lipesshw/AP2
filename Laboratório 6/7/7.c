#include <stdio.h>
#include "expressao.h"

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int resultado = calcularExpressao(N, 1);
    printf("O resultado da expressao para N=%d é: %d\n", N, resultado);

    return 0;
}
