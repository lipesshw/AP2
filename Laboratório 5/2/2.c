#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "PAROUIMPAR.h"

int numero;

int main() {
  setlocale(LC_ALL,"portuguese");
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (Positivo_Negativo(numero)) {
        printf("\n1 - O número é positivo.\n");
    } else {
        printf("\n2 - O número é negativo ou zero.\n\n", numero);
    }

    return 0;
}

