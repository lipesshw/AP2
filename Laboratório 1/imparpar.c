#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    (valor % 2 == 0) ? printf("O valor e par.\n") : printf("O valor e impar.\n");

    return 0;
}
