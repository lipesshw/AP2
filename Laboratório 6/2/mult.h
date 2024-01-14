//
// Created by lipeb on 14/01/2024.
//

#ifndef LAB6_MULT_H
#define LAB6_MULT_H

int multRecursiva(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + multRecursiva(a, b - 1);
    }
}

int multIterativa(int a, int b) {
    int resultado = 0;

    for (int i = 0; i < b; i++) {
        resultado += a;
    }

    return resultado;
}

#endif //LAB6_MULT_H
