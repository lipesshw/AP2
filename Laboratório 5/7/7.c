#include <stdio.h>
#include "garagem.h"

int main() {
    int numClientes;
    printf("Digite o número de clientes: ");
    scanf("%d", &numClientes);

    int carros[numClientes];
    double horas[numClientes];

    printf("Digite as horas de estacionamento para cada cliente:\n");

    for (int i = 0; i < numClientes; i++) {
        printf("Cliente %d - Horas: ", i + 1);
        scanf("%lf", &horas[i]);
    }

    printf("\nCarro\t.\tHoras\t.\tTaxas\n");

    double totalTaxas = 0.0;

    for (int i = 0; i < numClientes; i++) {
        double taxa = calculaTaxas(horas[i]);
        totalTaxas += taxa;
        printf("%d\t.\t%.1f\t.\t%.2f\n", i + 1, horas[i], taxa);
    }

    printf("Total\t.\t%.1f\t.\t%.2f\n", totalTaxas);

    return 0;
}
