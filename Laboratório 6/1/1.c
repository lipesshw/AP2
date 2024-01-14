#include <stdio.h>
#include "somanaturais.h"

int main() {
    int n;

    printf("Digite um número natural (n): ");
    scanf("%d", &n);

    printf("A soma dos primeiros %d números naturais é: %d\n", n, somaNaturais(n));

    return 0;
}
