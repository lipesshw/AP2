#include <stdio.h>
#include "fibonacci.h"

int N;

int main() {
    printf("Digite o valor de N para calcular o enesimo termo da sequencia de Fibonacci: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Por favor, insira um valor nao-negativo para N.\n");
        return 1;
    }

    long long resultado = calcularFibonacci(N);

    printf("O %d termo da sequencia de Fibonacci e: %lld\n", N, resultado);

    return 0;
}
