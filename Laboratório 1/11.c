#include <stdio.h>

int main() {
    int notas[6] = {0};
    int quantidadeNotasAbaixoDeSeis = 0;
    int somaNotasAcimaDeSeis = 0;
    int contadorNotasAcimaDeSeis = 0;

    for (int i = 0; i < 6; i++) {
        printf("Digite a nota do aluno %d (entre 0 e 10): ", i + 1);
        scanf("%d", &notas[i]);

        if (notas[i] > 6) {
            somaNotasAcimaDeSeis += notas[i];
            contadorNotasAcimaDeSeis++;
        }
    }

    printf("\nNotas dos alunos:\n\n");
    for (int i = 0; i < 6; i++) {
        printf("Aluno %d: %d\n", i + 1, notas[i]);
    }

    double media = 0.0;
    if (contadorNotasAcimaDeSeis > 0) {
        media = (double)somaNotasAcimaDeSeis / contadorNotasAcimaDeSeis;
    }

    for (int i = 0; i < 6; i++) {
        if (notas[i] < 6) {
            quantidadeNotasAbaixoDeSeis++;
        }
    }

    printf("\nMedia das notas acima de 6: %.2lf\n", media);
    printf("Quantidade de notas abaixo de 6: %d\n", quantidadeNotasAbaixoDeSeis);

    return 0;
}
