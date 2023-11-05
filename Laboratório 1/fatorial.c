#include <stdio.h>

int main() {
    int N;
    unsigned long long fatorial = 1;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("O numero deve ser positivo.\n");
    } else {
        int i = 1;

        while (i <= N) {
            fatorial *= i;
            i++;
        }

        printf("Fatorial de %d = %llu\n", N, fatorial);
    }

    return 0;
}
