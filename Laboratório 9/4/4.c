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

    arquivo = fopen("ALUNOS.DAT", "rb");

    if (arquivo == NULL) {
        arquivo = fopen("ALUNOS.DAT", "wb");
        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo.");
            return 1;
        }
        fclose(arquivo);
        arquivo = fopen("ALUNOS.DAT", "rb");
    }

    printf("Digite a matrícula do aluno: ");
    scanf("%d", &matricula_procurada);

    int matricula_existe = 0;
    while (fread(&aluno, sizeof(struct Aluno), 1, arquivo) == 1) {
        if (aluno.matricula == matricula_procurada) {
            matricula_existe = 1;
            break;
        }
    }

    fclose(arquivo);

    if (matricula_existe) {
        printf("Já existe um aluno com essa matrícula.\n");
        return 1;
    }

    arquivo = fopen("ALUNOS.DAT", "ab");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    aluno.matricula = matricula_procurada;
    printf("Digite o nome do aluno: ");
    scanf("%s", aluno.nome);
    printf("Digite o curso do aluno: ");
    scanf("%s", aluno.curso);
    printf("Digite a nota 1 do aluno: ");
    scanf("%f", &aluno.nota1);
    printf("Digite a nota 2 do aluno: ");
    scanf("%f", &aluno.nota2);

    fwrite(&aluno, sizeof(struct Aluno), 1, arquivo);

    fclose(arquivo);

    printf("Aluno incluído com sucesso no arquivo ALUNOS.DAT.\n");

    return 0;
}
