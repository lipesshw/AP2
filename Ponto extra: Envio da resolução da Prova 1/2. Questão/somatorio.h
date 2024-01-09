//
// Created by lipeb on 09/01/2024.
//

#ifndef PONTOEXTRA_SOMATORIO_H
#define PONTOEXTRA_SOMATORIO_H

float fatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * fatorial(num - 1);
    }
}

float soma(int N) {
    float resultado = 0;

    for (int i = 0; i <= N; i++) {
        resultado += 1 / fatorial(i);
    }

    return resultado;
}

#endif //PONTOEXTRA_SOMATORIO_H
