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
    int matricula_procurada;
    int encontrado = 0;

    arquivo = fopen("ALUNOS.DAT", "rb+");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    printf("Digite a matrícula do aluno que deseja alterar as notas: ");
    scanf("%d", &matricula_procurada);

    while (fread(&aluno, sizeof(struct Aluno), 1, arquivo) == 1) {
        if (aluno.matricula == matricula_procurada) {
            encontrado = 1;
            printf("Digite a nova nota 1 do aluno %s: ", aluno.nome);
            scanf("%f", &aluno.nota1);
            printf("Digite a nova nota 2 do aluno %s: ", aluno.nome);
            scanf("%f", &aluno.nota2);
            fseek(arquivo, -sizeof(struct Aluno), SEEK_CUR);
            fwrite(&aluno, sizeof(struct Aluno), 1, arquivo);
            break;
        }
    }

    fclose(arquivo);

    if (!encontrado) {
        printf("Aluno com matrícula %d não encontrado.\n", matricula_procurada);
    } else {
        printf("Notas do aluno alteradas com sucesso.\n");
    }

    return 0;
}
