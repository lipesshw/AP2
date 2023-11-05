#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero inteiro positivo, N: ");
    scanf("%d", &N);

    if (N > 0) {
        int numero = 1;
        int i = 1;

        while (i <= N) {
            if (i % 2 == 0) {
                printf("-%d", numero);
            } else {
                printf("%d", numero);
            }

            if (i < N) {
                printf(" ");
            }

            numero++;
            i++;
        }

        printf("\n");
    } else {
        printf("Nao e um numero inteiro positivo.\n");
    }

    return 0;
}
