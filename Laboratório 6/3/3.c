#include <stdio.h>
#include "pot.h"

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("Resultado da exponenciação (recursiva): %d\n", potRecursiva(base, expoente));
    printf("Resultado da exponenciação (iterativa): %d\n", potIterativa(base, expoente));

    return 0;
}
