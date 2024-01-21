#include <stdio.h>
#include "decremento.h"

int main()
{
    int x=5,y=8;
    troca(&x,&y);
    printf("\t troca: %d , %d \n", x,y);
    decremento(&x,&y);
    printf("\t decremento e incremento: %d %d \n", x,y);
    float raio= 5.0, perimetro_circulo, area_circulo;
    circulo(raio,&perimetro_circulo, &area_circulo);
    printf("\t perimetro circulo: %.2f, area circulo: %.2f \n", perimetro_circulo, area_circulo);
    float lado=4.0, perimetro_quadrado, area_quadrado;
    quadrado(lado,&perimetro_quadrado, &area_quadrado);
    printf("\t perimetro quadrado: %.2f, area quadrado: %.2f \n", perimetro_quadrado, area_quadrado);
    return 0;
}
