#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehPalindromo(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (fim > inicio) {
        while (isspace(str[inicio])) {
            inicio++;
        }
        while (isspace(str[fim])) {
            fim--;
        }

        if (tolower(str[inicio]) != tolower(str[fim])) {
            return 0;
        }
        inicio++;
        fim--;
    }

    return 1;
}

int main() {
    char str[100];

    printf("Digite uma palavra/frase: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    if (ehPalindromo(str)) {
        printf("%s e um palindromo.\n", str);
    } else {
        printf("%s nao e um palindromo.\n", str);
    }

    return 0;
}
