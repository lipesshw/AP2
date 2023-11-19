#include <stdio.h>
#include <string.h>

struct FichaCliente {
    char nome[50];
    char endereco[100];
    char email[50];
    int idade;
    char cpf[15];
    char sexo;
    char dataNascimento[12];
    float altura;
    float peso;
    float imc;
};

float calcularIMC(float altura, float peso) {
    return peso / (altura * altura);
}

int main() {
    struct FichaCliente cliente;

    printf("Nome: ");
    fgets(cliente.nome, sizeof(cliente.nome), stdin);
    cliente.nome[strcspn(cliente.nome, "\n")] = '\0';

    printf("Endereco: ");
    fgets(cliente.endereco, sizeof(cliente.endereco), stdin);
    cliente.endereco[strcspn(cliente.endereco, "\n")] = '\0';

    printf("E-mail: ");
    fgets(cliente.email, sizeof(cliente.email), stdin);
    cliente.email[strcspn(cliente.email, "\n")] = '\0';

    printf("Idade: ");
    scanf("%d", &cliente.idade);

    printf("CPF: ");
    scanf("%s", cliente.cpf);

    printf("Sexo (M/F): ");
    scanf(" %c", &cliente.sexo);

    printf("Data de Nascimento (dd/mm/aaaa): ");
    scanf("%s", cliente.dataNascimento);

    printf("Altura (em metros): ");
    scanf("%f", &cliente.altura);

    printf("Peso (em kg): ");
    scanf("%f", &cliente.peso);


    cliente.imc = calcularIMC(cliente.altura, cliente.peso);

    printf("\n\nDados do Cliente:\n\n");
    printf("Nome: %s\n", cliente.nome);
    printf("Endereco: %s\n", cliente.endereco);
    printf("E-mail: %s\n", cliente.email);
    printf("Idade: %d\n", cliente.idade);
    printf("CPF: %s\n", cliente.cpf);
    printf("Sexo: %c\n", cliente.sexo);
    printf("Data de Nascimento: %s\n", cliente.dataNascimento);
    printf("Altura: %.2f metros\n", cliente.altura);
    printf("Peso: %.2f kg\n", cliente.peso);
    printf("IMC: %.2f\n", cliente.imc);

    return 0;
}
