//
// Created by lipeb on 09/01/2024.
//

#ifndef PONTOEXTRA_PACIENTES_H
#define PONTOEXTRA_PACIENTES_H


struct Paciente {
    int CPF;
    char nome[50];
    float massaCorporal[3], altura;
};

void Le_escreve(struct Paciente pacientes[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o CPF do paciente %d: ", i + 1);
        scanf("%d", &pacientes[i].CPF);

        printf("Digite o nome do paciente %d: ", i + 1);
        scanf("%s", pacientes[i].nome);

        printf("Digite a massa corporal (em kg) do paciente %d para os 3 meses: ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%f", &pacientes[i].massaCorporal[j]);
        }

        printf("Digite a altura (em metros) do paciente %d: ", i + 1);
        scanf("%f", &pacientes[i].altura);

        printf("\n");
    }
}

void Atualiza(struct Paciente pacientes[], int tamanho) {
    strcpy(pacientes[0].nome, "Maria");

    printf("Nomes cadastrados:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%s\n", pacientes[i].nome);
    }
}

void IMC(struct Paciente pacientes[], int tamanho) {
    float somaMassaCorporal = 0.0;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < 3; j++) {
            somaMassaCorporal += pacientes[i].massaCorporal[j];
        }
    }

    float pesoMedio = somaMassaCorporal / (3 * tamanho);
    float imc = pesoMedio / (pacientes[0].altura * pacientes[0].altura);

    printf("\nPeso médio: %.1f kg\n", pesoMedio);
    printf("IMC: %.1f\n", imc);

    if (imc <= 18.4) {
        printf("Estado: Abaixo do peso\n");
    } else if (imc <= 24.9) {
        printf("Estado: Normal\n");
    } else {
        printf("Estado: Acima do peso\n");
    }
}


#endif //PONTOEXTRA_PACIENTES_H
