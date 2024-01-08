#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

int main() {
    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    float resultado = soma(N);

    printf("Resultado: %.2lf\n", resultado);

    return 0;
}
