#include <stdio.h>

int somarVetor(int *pVetor, int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += *(pVetor + i);
    }

    return soma;
}

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};

    int *pVetor = vetor;

    int resultado = somarVetor(pVetor, 5);

    printf("A soma dos elementos do vetor é: %d\n", resultado);

    return 0;
}
