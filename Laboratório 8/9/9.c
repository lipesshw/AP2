#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "algoritmos e programação 2";

    char *pString;

    pString = string;

    while (*pString != '\0') {
        *pString = toupper(*pString);
        pString++;
    }

    printf("String original: %s\n", string);

    return 0;
}
