#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    char curso[50];
};

int main() {
    struct Aluno alunos[5];

    for (int i = 0; i < 5; ++i) {
        printf("Informe os dados do aluno %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", alunos[i].nome);

        printf("Numero de Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Curso: ");
        scanf("%s", alunos[i].curso);

        printf("\n");
    }


    printf("\n\n\nDados dos alunos:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Numero de Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n", alunos[i].curso);
        printf("\n");
    }

    return 0;
}
