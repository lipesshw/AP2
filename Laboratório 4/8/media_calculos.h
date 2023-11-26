//
// Created by lipeb on 26/11/2023.
//

#ifndef UNTITLED2_MEDIA_CALCULOS_H
#define UNTITLED2_MEDIA_CALCULOS_H

float calcularMediaAritmetica(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3.0;
}

float calcularMediaPonderada(float nota1, float nota2, float nota3) {
    return (nota1 * 5.0 + nota2 * 3.0 + nota3 * 2.0) / 10.0;
}

#endif //UNTITLED2_MEDIA_CALCULOS_H
