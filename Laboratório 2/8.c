#include <stdio.h>

int contarUns(char *str) {
    int count = 0;

    while (*str != '\0') {
        if (*str == '1') {
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char string[] = "0011001";
    int resultado = contarUns(string);

    printf("Numero de 1's na string: %d\n", resultado);

    return 0;
}
