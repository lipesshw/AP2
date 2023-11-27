#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "mdc.h"

int x, y;

int main() {
  setlocale(LC_ALL,"portuguese");

    printf("Digite um primeiro valor: ");
    scanf("%d", &x);

    printf("Digite um segundo valor: ");
    scanf("%d", &y);

    int resultadoMdc = mdc(x,y);

    printf("O MDC de %d e %d é: %d\n", x, y, resultadoMdc);

    return 0;
}

