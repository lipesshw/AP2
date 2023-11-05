#include <stdio.h>

int main() {
    int primeiro, segundo;

    printf("Digite o primeiro valor: ");
    scanf("%d", &primeiro);

    printf("Digite o segundo valor: ");
    scanf("%d", &segundo);

    if (primeiro < segundo) {
        printf("Valores entre %d e %d em ordem crescente:\n", primeiro, segundo);
        for (int i = primeiro; i <= segundo; i++) {
            printf("%d ", i);
        }
        printf("\n");
    } else if (primeiro > segundo) {
        printf("Valores entre %d e %d em ordem decrescente:\n", primeiro, segundo);
        for (int i = primeiro; i >= segundo; i--) {
            printf("%d ", i);
        }
        printf("\n");
    } else {
        printf("Valores iguais.\n");
    }

    return 0;
}
