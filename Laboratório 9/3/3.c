#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
    char curso[50];
    float nota1;
    float nota2;
};

int main() {
    FILE *arquivo;
    struct Aluno aluno;

    arquivo = fopen("ALUNOS.DAT", "wb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    printf("Digite a matricula: ");
    scanf("%d", &aluno.matricula);
    printf("Digite o nome: ");
    scanf("%s", aluno.nome);
    printf("Digite o curso: ");
    scanf("%s", aluno.curso);
    printf("Digite a nota 1: ");
    scanf("%f", &aluno.nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &aluno.nota2);

    fwrite(&aluno, sizeof(struct Aluno), 1, arquivo);

    fclose(arquivo);

    printf("Os dados do aluno foram gravados no arquivo ALUNOS.DAT com sucesso.\n");

    return 0;
}
