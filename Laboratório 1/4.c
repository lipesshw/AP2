#include <stdio.h>

int main() {
    printf("Tamanho de um char: %lu byte(s)\n", sizeof(char));
    printf("Tamanho de um short: %lu byte(s)\n", sizeof(short));
    printf("Tamanho de um int: %lu byte(s)\n", sizeof(int));
    printf("Tamanho de um long: %lu byte(s)\n", sizeof(long));
    printf("Tamanho de um long long: %lu byte(s)\n", sizeof(long long));
    printf("Tamanho de um float: %lu byte(s)\n", sizeof(float));
    printf("Tamanho de um double: %lu byte(s)\n", sizeof(double));
    printf("Tamanho de um long double: %lu byte(s)\n", sizeof(long double));

    return 0;
}
