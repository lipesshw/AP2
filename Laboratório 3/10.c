#include <stdio.h>

struct dma {
    int dia;
    int mes;
    int ano;
};

int diasNoMes(int mes, int ano) {
    int diasNoMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes == 2 && (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)))
        return 29;
    else
        return diasNoMes[mes];
}

int contarDias(struct dma data) {
    int dias = data.dia;
    for (int i = 1; i < data.mes; i++) {
        dias += diasNoMes(i, data.ano);
    }
    return dias + 365 * (data.ano - 1) + (data.ano - 1) / 4 - (data.ano - 1) / 100 + (data.ano - 1) / 400;
}

int diferencaDias(struct dma data1, struct dma data2) {
    return contarDias(data2) - contarDias(data1);
}

int main() {
    struct dma data1, data2;

    printf("\nInforme a primeira data (dia mes ano): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Informe a segunda data (dia mes ano): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    int difDias = diferencaDias(data1, data2);

    printf("Diferenca em dias entre as duas datas: %d\n", difDias);

    return 0;
}
