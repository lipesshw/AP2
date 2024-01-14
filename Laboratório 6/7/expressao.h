//
// Created by lipeb on 14/01/2024.
//

#ifndef LAB6_EXPRESSAO_H
#define LAB6_EXPRESSAO_H

int calcularExpressao(int N, int i) {
    if (i > N) {
        return 0;
    }

    int termoAtual = 2 * (i - 1);

    int proximoTermo = calcularExpressao(N, i + 1);

    return termoAtual + proximoTermo;
}

#endif //LAB6_EXPRESSAO_H
