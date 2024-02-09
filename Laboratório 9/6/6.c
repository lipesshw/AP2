#include <stdio.h>
#include <string.h>

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
    int matricula_procurada;
    int encontrado = 0;

    arquivo = fopen("ALUNOS.DAT", "rb+");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    printf("Digite a matrícula do aluno que deseja alterar o curso: ");
    scanf("%d", &matricula_procurada);

    while (fread(&aluno, sizeof(struct Aluno), 1, arquivo) == 1) {
        if (aluno.matricula == matricula_procurada) {
            encontrado = 1;
            printf("Digite o novo curso do aluno %s: ", aluno.nome);
            scanf("%s", aluno.curso);
            fseek(arquivo, -sizeof(struct Aluno), SEEK_CUR);
            fwrite(&aluno, sizeof(struct Aluno), 1, arquivo);
            break;
        }
    }

    fclose(arquivo);

    if (!encontrado) {
        printf("Aluno com matrícula %d não encontrado.\n", matricula_procurada);
    } else {
        printf("Curso do aluno alterado com sucesso.\n");
    }

    return 0;
}
