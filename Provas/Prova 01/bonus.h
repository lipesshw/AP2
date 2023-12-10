//
// Created by lipeb on 10/12/2023.
//

#ifndef PROVASSEGUNDA_CLIENTE_H
#define PROVASSEGUNDA_CLIENTE_H

#include <string.h>

struct cliente{
    char nome[50];
    int cpf;
    float saldo;
};


extern struct cliente vetor_clientes[3];

void LerCampos() {
    for(int i = 0; i < 3; i++) {
        printf("\nDigite o nome do %d cliente: ", i + 1);
        scanf("%s", vetor_clientes[i].nome);
        printf("Digite o cpf: ");
        scanf("%d", &vetor_clientes[i].cpf);
        printf("Digite o saldo: ");
        scanf("%f", &vetor_clientes[i].saldo);
    }
}

void AtualizarNome() {
    strcpy(&vetor_clientes[0].nome, "Manuel da Silva");
}

void Bonus() {
    printf("\n\nResultado:\n\n");
    for (int i = 0; i < 3; i++) {

        if (vetor_clientes[i].saldo > 0) {
            float bonus = vetor_clientes[i].saldo * 0.10;
            vetor_clientes[i].saldo += bonus;
        }

        printf("Nome do %d cliente: %s\n", i + 1, vetor_clientes[i].nome);
        printf("CPF: %d\n", vetor_clientes[i].cpf);
        printf("Saldo: %.2f\n\n", vetor_clientes[i].saldo);

    }
}



#endif //PROVASSEGUNDA_CLIENTE_H
