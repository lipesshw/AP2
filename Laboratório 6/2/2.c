#include <stdio.h>
#include "mult.h"

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Resultado da multiplicação (recursiva): %d\n", multRecursiva(num1, num2));
    printf("Resultado da multiplicação (iterativa): %d\n", multIterativa(num1, num2));

    return 0;
}
