#include <stdio.h>
#include "primos.h"

int main() {
    int num;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    return Primo(num);
}
