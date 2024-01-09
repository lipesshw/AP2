#include <stdio.h>
#include "somatorio.h"

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    float resultado = soma(N);
    printf("Resultado do somatório: %.4f\n", resultado);

    return 0;
}
