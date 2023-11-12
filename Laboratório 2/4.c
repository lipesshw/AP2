#include <stdio.h>
#include <string.h>

int main() {
    char str[11];
    char str2[11];

    printf("Digite uma string de 10 caracteres: ");

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("A string digitada e: %s\n", str);

    strcpy(str2, str);

    printf("A string copiada e: %s\n", str2);

    return 0;
}
