#include <stdio.h>
#include <stdlib.h>
#include "colaborador.h"
int main() {
    struct Colaborador colaborador;
    lerColaborador(&colaborador);

    float salario_final = salario(colaborador);

    printf("Salário Final: R$ %.2f\n", salario_final);

    return 0;

}
