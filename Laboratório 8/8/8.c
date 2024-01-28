#include <stdio.h>

int main() {
    int valorOriginal = 10;

    int *valorPonteiro;

    valorPonteiro = &valorOriginal;

    *valorPonteiro = 20;

    printf("Valor original da variavel: %d\n", valorOriginal);
    printf("Novo valor da variavel: %d\n", *valorPonteiro);

    return 0;
}
