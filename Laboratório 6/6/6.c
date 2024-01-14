#include <stdio.h>
#include "fibonacci.h"

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", n, fibonacci(n));

    return 0;
}
