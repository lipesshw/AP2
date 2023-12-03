//
// Created by lipeb on 03/12/2023.
//

#ifndef UNTITLED2_COMBINACAO_H
#define UNTITLED2_COMBINACAO_H

int Fatorial(int valor) {
    if (valor == 0 || valor == 1) {
        return 1;
    } else {
        return valor * Fatorial(valor - 1);
    }
}

int Combina(int n, int p) {
    if (n < p || n < 0 || p < 0) {

        return -1;
    }

    int numerador = Fatorial(n);
    int denominador = Fatorial(p) * Fatorial(n - p);


    int resultado = numerador / denominador;

    return resultado;
}

#endif //UNTITLED2_COMBINACAO_H
