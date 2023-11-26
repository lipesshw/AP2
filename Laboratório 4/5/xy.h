//
// Created by lipeb on 26/11/2023.
//

#ifndef UNTITLED2_XY_H
#define UNTITLED2_XY_H

int x, y;


int somar() {
    return x + y;
}

int subtrair() {
    return x - y;
}

int multiplicar() {
    return x * y;
}

float dividir() {
    if (y != 0) {
        return (float)x / y;
    } else {
        return 0;  // Tratamento de divisão por zero
    }
}

#endif //UNTITLED2_XY_H
