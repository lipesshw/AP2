#include <stdio.h>

struct AcaoBolsa {
    char nomeCompanhia[50];
    char areaAtuacao[50];
    double valorAtual;
    double valorAnterior;
    double variacaoPercentual;
};

int main() {
    struct AcaoBolsa acao1;

    printf("Nome da companhia: ");
    scanf("%s", acao1.nomeCompanhia);

    printf("Area de atuacao: ");
    scanf("%s", acao1.areaAtuacao);

    printf("Valor atual da acao (em reais): ");
    scanf("%lf", &acao1.valorAtual);

    printf("Valor anterior da acao (em reais): ");
    scanf("%lf", &acao1.valorAnterior);

    acao1.variacaoPercentual = ((acao1.valorAtual - acao1.valorAnterior) / acao1.valorAnterior) * 100;

    printf("\nInformacoes da Acao:\n\n");
    printf("Nome da companhia: %s\n", acao1.nomeCompanhia);
    printf("Area de atuacao: %s\n", acao1.areaAtuacao);
    printf("Valor atual da acao: R$ %.2lf\n", acao1.valorAtual);
    printf("Valor anterior da acao: R$ %.2lf\n", acao1.valorAnterior);
    printf("Variacao da acao: %.2lf%%\n", acao1.variacaoPercentual);

    return 0;
}
