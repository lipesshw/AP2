//
// Created by lipeb on 10/12/2023.
//

#ifndef PROVASSEGUNDA_ESTUDANTES_H
#define PROVASSEGUNDA_ESTUDANTES_H

#include <string.h>

struct estudante {
    int matricula;
    char nome[50];
    float media_final;
};

extern struct estudante vetor_alunos[3];

void Ler() {
    for (int i = 0; i < 3; i++) {
        printf("Digite o matricula do %d aluno:", i + 1);
        scanf("%d", &vetor_alunos[i].matricula);

        printf("Digite o nome do %d aluno:", i + 1);
        scanf("%s", vetor_alunos[i].nome);

        printf("Digite a media do %d aluno:", i + 1);
        scanf("%f", &vetor_alunos[i].media_final);

        printf("\n");
    }
}

void Atualizar() {
    strcpy(vetor_alunos[2].nome, "Francisco Pereira");
}


void Concluir() {
    int aprovados = 0;
    int reprovados = 0;

    for (int i = 0; i < 3; i++) {
        if (vetor_alunos[i].media_final >= 6.0) {
            aprovados++;
        } else {
            reprovados++;
        }
    }


    printf("Quantidade de alunos aprovados: %d\n", aprovados);
    printf("Quantidade de alunos reprovados: %d\n", reprovados);
}



#endif //PROVASSEGUNDA_ESTUDANTES_H
