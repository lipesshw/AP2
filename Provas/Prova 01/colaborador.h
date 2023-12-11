//
// Created by lipeb on 11/12/2023.
//

#ifndef PROVASSEGUNDA_COLABORADOR_H
#define PROVASSEGUNDA_COLABORADOR_H

struct Colaborador {
    char nome[50];
    float horas_trabalhadas;
    float valor_por_hora;
};

void lerColaborador(struct Colaborador * colaborador) {
    printf("Nome: ");
    scanf("%s", colaborador->nome);

    printf("Horas Trabalhadas: ");
    scanf("%f", &colaborador->horas_trabalhadas);

    printf("Valor por Hora: ");
    scanf("%f", &colaborador->valor_por_hora);
}

float salario(struct Colaborador colaborador) {
    float salario_bruto = colaborador.horas_trabalhadas * colaborador.valor_por_hora;


    float imposto;

    if (salario_bruto <= 2000.0) {
        imposto = 0.0;
    } else if (salario_bruto <= 3000.0) {
        imposto = 0.08;
    } else if (salario_bruto <= 4500.0) {
        imposto = 0.18;
    } else {
        imposto = 0.28;
    }

    float desconto = salario_bruto * imposto;
    float salario_final = salario_bruto - desconto;

    return salario_final;
}

#endif //PROVASSEGUNDA_COLABORADOR_H
