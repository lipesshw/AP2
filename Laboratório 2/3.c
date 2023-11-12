#include <stdio.h>

int main() {
    char str[11];

    printf("Digite uma string de 10 caracteres: ");

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("A string digitada e: %s\n", str);

    return 0;
}
