#include <stdio.h>
#include <string.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota1, nota2, nota3;
};

int main() {
    struct Aluno alunos[5];

    printf("\nEntre com os dados dos alunos:\n\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Nota da primeira prova: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota da segunda prova: ");
        scanf("%f", &alunos[i].nota2);
        printf("Nota da terceira prova: ");
        scanf("%f", &alunos[i].nota3);
    }

    int indiceMaiorNota1 = 0;
    for (int i = 1; i < 5; i++) {
        if (alunos[i].nota1 > alunos[indiceMaiorNota1].nota1) {
            indiceMaiorNota1 = i;
        }
    }
    printf("\n\nAluno com maior nota na primeira prova:\n");
    printf("Matricula: %d\n", alunos[indiceMaiorNota1].matricula);
    printf("Nome: %s\n", alunos[indiceMaiorNota1].nome);
    printf("Nota da primeira prova: %.2f\n", alunos[indiceMaiorNota1].nota1);

    int indiceMaiorMedia = 0, indiceMenorMedia = 0;
    for (int i = 1; i < 5; i++) {
        float mediaAtual = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
        float mediaMaior = (alunos[indiceMaiorMedia].nota1 + alunos[indiceMaiorMedia].nota2 + alunos[indiceMaiorMedia].nota3) / 3.0;
        float mediaMenor = (alunos[indiceMenorMedia].nota1 + alunos[indiceMenorMedia].nota2 + alunos[indiceMenorMedia].nota3) / 3.0;

        if (mediaAtual > mediaMaior) {
            indiceMaiorMedia = i;
        }

        if (mediaAtual < mediaMenor) {
            indiceMenorMedia = i;
        }
    }
    printf("\nvAluno com maior media geral:\n");
    printf("Matricula: %d\n", alunos[indiceMaiorMedia].matricula);
    printf("Nome: %s\n", alunos[indiceMaiorMedia].nome);
    printf("Media geral: %.2f\n", (alunos[indiceMaiorMedia].nota1 + alunos[indiceMaiorMedia].nota2 + alunos[indiceMaiorMedia].nota3) / 3.0);

    printf("\n\nAluno com menor media geral:\n");
    printf("Matricula: %d\n", alunos[indiceMenorMedia].matricula);
    printf("Nome: %s\n", alunos[indiceMenorMedia].nome);
    printf("Media geral: %.2f\n", (alunos[indiceMenorMedia].nota1 + alunos[indiceMenorMedia].nota2 + alunos[indiceMenorMedia].nota3) / 3.0);


    printf("\n\nSituacao dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
        printf("Aluno %d - Matricula: %d, Nome: %s, Media: %.2f - ", i + 1, alunos[i].matricula, alunos[i].nome, media);
        if (media >= 6.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}
