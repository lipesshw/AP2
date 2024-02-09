#include <stdio.h>
#include <string.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
};

int main() {
    FILE *arquivo;
    struct Aluno aluno;

    arquivo = fopen("ALUNOS.DAT", "rb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    printf("Alunos cujos nomes começam com a letra 'M':\n");
    printf("Matrícula\tNome\n");
    printf("----------------------------------------\n");
    while (fread(&aluno, sizeof(struct Aluno), 1, arquivo) == 1) {
        if (aluno.nome[0] == 'M' || aluno.nome[0] == 'm') {
            printf("%d\t\t%s\n", aluno.matricula, aluno.nome);
        } else {
            printf("Nenhum aluno que começa com a letra M foi encontrado.\n");
        }
    }

    // Fecha o arquivo
    fclose(arquivo);

    return 0;
}
