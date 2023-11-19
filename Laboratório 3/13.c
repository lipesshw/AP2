#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    char dados[50];
    float saldo;
};

struct Endereco {
    char rua[50];
    int numero;
    char cep[15];
    struct Pessoa pessoa;
};

int main() {
    struct Endereco endereco1;

    strcpy(endereco1.rua, "Rua um");
    endereco1.numero = 123;
    strcpy(endereco1.cep, "12345-678");

    strcpy(endereco1.pessoa.nome, "Pixain");
    strcpy(endereco1.pessoa.dados, "um editor vfx");
    endereco1.pessoa.saldo = 100.00;

    endereco1.numero = 456;

    strcpy(endereco1.pessoa.nome, "karatefx");
    strcpy(endereco1.pessoa.dados, "outro vfx artist");

    printf("Endereco:\n");
    printf("Rua: %s\n", endereco1.rua);
    printf("Numero: %d\n", endereco1.numero);
    printf("CEP: %s\n", endereco1.cep);

    printf("\nPessoa:\n");
    printf("Nome: %s\n", endereco1.pessoa.nome);
    printf("Dados: %s\n", endereco1.pessoa.dados);
    printf("Saldo: R$ %.2f\n", endereco1.pessoa.saldo);

    return 0;
}
