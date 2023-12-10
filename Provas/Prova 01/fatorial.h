//
// Created by lipeb on 10/12/2023.
//

#ifndef PROVASSEGUNDA_FATORIAL_H
#define PROVASSEGUNDA_FATORIAL_H

#include <stdio.h>
#include <stdlib.h>

int N = 0;

int Ler() {
    do {
        printf("Digite um numero positivo maior ou igual a 0:");
        scanf("%d", &N);

        if (N < 1) {
            printf("Valor inválido. N deve ser maior ou igual a 0.\n");
        }

    } while ( N < 0);
    return N;
}

int fatorial() {
    int rf = 1;

    for (int i = 1; i <= N; ++i) {
        rf *= i;
    }

    return rf;
}

#endif //PROVASSEGUNDA_FATORIAL_H
