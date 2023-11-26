#include <stdio.h>

typedef struct {
    int matricula;
    float notas[3];
} Aluno;

Aluno Turma[5];

void LeAluno(int i) {
    printf("Informe a matricula do aluno: ");
    scanf("%d", &Turma[i].matricula);

    printf("Informe as notas do aluno (3 notas): ");
    for (int j = 0; j < 3; j++) {
        scanf("%f", &Turma[i].notas[j]);
    }
}

void ImprimeTurma() {
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d - Matricula: %d, Notas: %.2f, %.2f, %.2f\n",
               i + 1, Turma[i].matricula, Turma[i].notas[0], Turma[i].notas[1], Turma[i].notas[2]);
    }
}

float CalculaMediaAluno(int i) {
    float media = 0.0;
    for (int j = 0; j < 3; j++) {
        media += Turma[i].notas[j];
    }
    return media / 3;
}

int main() {
    for (int i = 0; i < 5; i++) {
        LeAluno(i);
    }

    ImprimeTurma();

    for (int i = 0; i < 5; i++) {
        float media = CalculaMediaAluno(i);
        printf("Aluno %d - Media = %.2f\n", i + 1, media);
    }

    return 0;
}
