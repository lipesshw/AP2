#include <stdio.h>
#include "matriz.h"

int main() {
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("Matriz original:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    substituirParesPor1000(matriz);

    printf("\nMatriz com pares substituídos por 1000:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
