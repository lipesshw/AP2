#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero decimal: ");
    scanf("%d", &numero);

    printf("Em hexadecimal: 0x%X\n", numero);

    printf("Em octal: 0%o\n", numero);

    return 0;
}
