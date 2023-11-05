#include <stdio.h>

int main() {
    int a = 5;
    int b, c;

    b = ++a; // a é incrementado para 6 antes de ser atribuído a b
    c = a++; // a é atribuído a c (que ainda é 6) antes de ser incrementado

    printf("a: %d\n", a); // a foi incrementado duas vezes, então é 7
    printf("b: %d\n", b); // b recebeu o valor de a após o pré-incremento, que é 6
    printf("c: %d\n", c); // c recebeu o valor de a antes do pós-incremento, que é 6

    return 0;
}
