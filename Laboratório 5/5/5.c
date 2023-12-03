#include <stdio.h>
#include "triangulo.h"

int main() {
    int a, b, c;

    printf("Digite os tres lados do triangulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if (Triangulo(a, b, c)) {
        printf("Os lados %d, %d e %d formam um triangulo.\n", a, b, c);
    } else {
        printf("Os lados %d, %d e %d nao formam um triangulo.\n", a, b, c);
    }


    return 0;
}
