#include <stdio.h>
#include <string.h>

int main() {
    char usuario_correto[] = "admin";
    char senha_correta[] = "a1b2C3";

    char nome_usuario[50];
    char senha[50];

    printf("Digite o nome de usuario: ");
    scanf("%s", nome_usuario);

    printf("Digite a senha: ");
    scanf("%s", senha);

    if (strcmp(nome_usuario, usuario_correto) == 0 && strcmp(senha, senha_correta) == 0) {
        printf("\nVerificando...\n");
        printf("Autenticado com sucesso! Bem-vindo, %s!\n", nome_usuario);
    } else {
        printf("\nVerificando...\n");
        printf("Nome de usuario ou senha incorretos. Tente novamente.\n");
    }

    return 0;
}
