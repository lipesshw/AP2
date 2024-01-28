#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float media;
};

int main() {
    struct Aluno *pontAluno;

    struct Aluno mAluno;

    pontAluno = &mAluno;

    printf("Digite o nome do aluno: ");
    scanf("%s", pontAluno->nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &(pontAluno->idade));

    printf("Digite a média do aluno: ");
    scanf("%f", &(pontAluno->media));

    printf("\nDados do aluno:\n");
    printf("Nome: %s\n", pontAluno->nome);
    printf("Idade: %d\n", pontAluno->idade);
    printf("Média: %.2f\n", pontAluno->media);

    return 0;
}

