#include <stdio.h>
#include <string.h>

int ehPalindromo(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (fim > inicio) {
        if (str[inicio] != str[fim]) {
            return 0;
        }
        inicio++;
        fim--;
    }

    return 1;
}

int main() {
    char str[100];

    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    if (ehPalindromo(str)) {
        printf("%s e um palindromo.\n", str);
    } else {
        printf("%s não e um palindromo.\n", str);
    }

    return 0;
}
