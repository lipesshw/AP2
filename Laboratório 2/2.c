#include <stdio.h>

//o exercicio 1 também responde o exercício 2.
int main() {
    char n[]={'a', 'b'}; //é uma definicao de vetor de caractere
    char n2[3]="AB"; //é uma definicao de string
    int c;

    for(c=0; c<2; c++)
    {
        printf("%c", n[c]);
    }

    printf("\n%s", n2);

}
