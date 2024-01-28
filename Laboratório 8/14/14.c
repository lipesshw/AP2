#include <stdio.h>

struct Endereco {
    char rua[50];
    int numero;
    char cidade[50];
};

struct Pessoa {
    char nome[50];
    int idade;
    struct Endereco endereco;
};

int main() {
    struct Pessoa *ponteiroParaPessoa;

    ponteiroParaPessoa = (struct Pessoa *)malloc(sizeof(struct Pessoa));

    if (ponteiroParaPessoa == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    strcpy(ponteiroParaPessoa->nome, "João");
    ponteiroParaPessoa->idade = 25;
    strcpy(ponteiroParaPessoa->endereco.rua, "Rua Principal");
    ponteiroParaPessoa->endereco.numero = 123;
    strcpy(ponteiroParaPessoa->endereco.cidade, "Cidade");

    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", ponteiroParaPessoa->nome);
    printf("Idade: %d\n", ponteiroParaPessoa->idade);
    printf("Endereço: %s, %d, %s\n", ponteiroParaPessoa->endereco.rua, ponteiroParaPessoa->endereco.numero, ponteiroParaPessoa->endereco.cidade);


    free(ponteiroParaPessoa);

    return 0;
}
