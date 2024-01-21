//
// Created by lipeb on 21/01/2024.
//

#ifndef LAB7_DECREMENTO_H
#define LAB7_DECREMENTO_H

#include <stdio.h>
#include <stdlib.h>

int troca(int *a, int *b)
{
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}

int decremento(int*a, int *b){
    (*a)--;
    (*b)++;
}

float circulo(float raio, float *perimetro, float *area ){
    *perimetro= 2*3.14*raio;
    *area= 3.14*raio*raio;
}
int quadrado(float lado, float *perimetro, float *area){
    *perimetro= lado*4;
    *area=lado*lado;
}

#endif //LAB7_DECREMENTO_H
