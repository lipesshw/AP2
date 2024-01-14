//
// Created by lipeb on 14/01/2024.
//

#ifndef LAB6_POT_H
#define LAB6_POT_H


int potRecursiva(int x, int n) {
    if (n == 0) {
        return 1;
    } else {
        return x * potRecursiva(x, n - 1);
    }
}

int potIterativa(int x, int n) {
    int resultado = 1;

    for (int i = 0; i < n; i++) {
        resultado *= x;
    }

    return resultado;
}


#endif //LAB6_POT_H
