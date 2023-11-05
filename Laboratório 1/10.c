#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("O numero deve ser positivo.\n");
    } else {
        int a = 0, b = 1, c;

        printf("Sequencia de Fibonacci para N = %d:\n", N);

        if (N >= 1) {
            printf("%d", a);
        }

        for (int i = 1; i < N; i++) {
            printf(", %d", b);
            c = a + b;
            a = b;
            b = c;
        }

        printf("\n");
    }

    return 0;
}
