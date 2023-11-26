#include <stdio.h>
#include "media_calculos.h"

int main() {
    float nota1, nota2, nota3;
    char tipoMedia;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Digite o tipo de media (A para Aritmetica, P para Ponderada): ");
    scanf(" %c", &tipoMedia);

    float media;

    if (tipoMedia == 'A' || tipoMedia == 'a') {
        media = calcularMediaAritmetica(nota1, nota2, nota3);
    } else if (tipoMedia == 'P' || tipoMedia == 'p') {
        media = calcularMediaPonderada(nota1, nota2, nota3);
    } else {
        printf("Tipo de media invalido. Use 'A' para Aritmetica ou 'P' para Ponderada.\n");
        return 1;
    }

    printf("A media calculada e: %.2f\n", media);

    return 0;
}
