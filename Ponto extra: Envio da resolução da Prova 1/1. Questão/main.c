#include <stdio.h>
#include "pacientes.h"

int main() {
    struct Paciente pacientes[3];

    Le_escreve(pacientes, 3);
    Atualiza(pacientes, 3);
    IMC(pacientes, 3);

    return 0;
}
