#include <stdio.h>
#include "combinacao.h"

int main() {
    int n = 10;
    int p = 4;

    int resultado = Combina(n, p);

    if (resultado == -1) {
        printf("Erro: n deve ser maior ou igual a p, e ambos devem ser nao-negativos.\n");
    } else {
        printf("O resultado da combinacao C(%d, %d) e: %d\n", n, p, resultado);
    }

    return 0;
}
