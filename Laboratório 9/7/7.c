#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
    char curso[50];
    float nota1;
    float nota2;
};

int main() {
    FILE *arquivo_original, *arquivo_temporario;
    struct Aluno aluno;

    arquivo_original = fopen("ALUNOS.DAT", "rb");
    if (arquivo_original == NULL) {
        printf("Erro ao abrir o arquivo original.");
        return 1;
    }

    arquivo_temporario = fopen("TEMP.DAT", "wb");
    if (arquivo_temporario == NULL) {
        printf("Erro ao abrir o arquivo temporário.");
        fclose(arquivo_original);
        return 1;
    }

    while (fread(&aluno, sizeof(struct Aluno), 1, arquivo_original) == 1) {
        float media = (aluno.nota1 + aluno.nota2) / 2.0;
        if (media >= 6.0) {
            fwrite(&aluno, sizeof(struct Aluno), 1, arquivo_temporario);
        }
    }

    fclose(arquivo_original);
    fclose(arquivo_temporario);

    remove("ALUNOS.DAT");
    rename("TEMP.DAT", "ALUNOS.DAT");

    printf("Alunos reprovados excluídos com sucesso.\n");

    return 0;
}
