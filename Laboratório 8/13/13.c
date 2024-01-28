#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno *pontAluno;

    pontAluno = (struct Aluno *)malloc(sizeof(struct Aluno));

    if (pontAluno == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Digite o nome do aluno: ");
    scanf("%s", pontAluno->nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &(pontAluno->idade));

    printf("Digite a nota do aluno: ");
    scanf("%f", &(pontAluno->nota));

    
    printf("\nDados do aluno:\n");
    printf("Nome: %s\n", pontAluno->nome);
    printf("Idade: %d\n", pontAluno->idade);
    printf("Nota: %.2f\n", pontAluno->nota);

    free(pontAluno);

    return 0;
}
