//
// Created by lipeb on 26/11/2023.
//

#ifndef UNTITLED2_SAUDACAO_H
#define UNTITLED2_SAUDACAO_H

int hora;

int saudacao() {
    if (hora >= 6 && hora <= 12) {
        printf("Bom dia\n");
    } else if (hora >= 12 && hora < 18) {
        printf("Boa tarde\n");
    } else if ((hora >= 18 && hora <= 24) || (hora >= 0 && hora <= 5)) {
        printf("Boa noite\n");
    } else {
        printf("Valor invalido\n");
    }

    return 0;
}

#endif //UNTITLED2_SAUDACAO_H
