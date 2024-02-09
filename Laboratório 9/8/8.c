#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
};

int main() {
    FILE *arquivo;
    struct Aluno aluno;
    float media;

    arquivo = fopen("ALUNOS.DAT", "rb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    printf("Alunos cadastrados:\n");
    printf("Matrícula\tNome\t\tMédia\n");
    printf("----------------------------------------\n");
    while (fread(&aluno, sizeof(struct Aluno), 1, arquivo) == 1) {
        media = (aluno.nota1 + aluno.nota2) / 2.0;
        printf("%d\t\t%s\t\t%.2f\n", aluno.matricula, aluno.nome, media);
    }

    fclose(arquivo);

    return 0;
}
