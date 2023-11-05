#include <stdio.h>
// n fui na primeira aula, to com dificuldade nessa aq

int main() {
    int N;

    while (1) {
        printf("Digite a ordem da matriz (0 <= N <= 100): ");
        scanf("%d", &N);

        if (N == 0) {
            break; 
        }

        if (N < 0 || N > 100) {
            printf("Ordem da matriz fora do intervalo permitido.\n");
            continue;
        }

        // Construa e imprima a matriz
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                int valor = i - j + 1;
                if (valor < 0) {
                    valor = -valor;
                }

                if (j == 1) {
                    printf("%d", valor);
                } else {
                    printf(" %d", valor);
                }
            }
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
