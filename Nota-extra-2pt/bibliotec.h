#ifndef BIBLIOTEC_H_INCLUDED
#define BIBLIOTEC_H_INCLUDED

struct produtos {
    int identificador;
    int quantidade[3];
    char nome[50];
    float preco;
};

struct produtos estoque[3];

void le_escreve() {
    for (int i = 0; i < 3; i++) {
        printf("Digite o identificador do produto %d: ", i + 1);
        scanf("%d", &estoque[i].identificador);

        printf("Digite a quantidade em estoque para o tamanho P do produto %d: ", i + 1);
        scanf("%d", &estoque[i].quantidade[0]);
        printf("Digite a quantidade em estoque para o tamanho M do produto %d: ", i + 1);
        scanf("%d", &estoque[i].quantidade[1]);
        printf("Digite a quantidade em estoque para o tamanho G do produto %d: ", i + 1);
        scanf("%d", &estoque[i].quantidade[2]);

        printf("Digite o nome do produto %d: ", i + 1);
        scanf("%s", estoque[i].nome);

        printf("Digite o preço do produto %d: ", i + 1);
        scanf("%f", &estoque[i].preco);

        printf("\n");
    }
}

void Busca() {
    int encontrou = 0;
    for (int i = 0; i < 3; i++) {
        if (strcmp(estoque[i].nome, "bermuda") == 0) {
            encontrou = 1;
            printf("A peça 'bermuda' foi cadastrada.\nQuantidade no tamanho M: %d\n", estoque[i].quantidade[1]);
            break;
        }
    }

    if (!encontrou) {
        printf("A peça 'bermuda' não foi cadastrada.\n");
    }
}

void CalculaTotal() {
    float total = 0.0;
    for (int i = 0; i < 3; i++) {
        total += estoque[i].preco * (estoque[i].quantidade[0] + estoque[i].quantidade[1] + estoque[i].quantidade[2]);
    }

    printf("O valor total de estoque é: %.2f\n", total);
}



#endif // BIBLIOTEC_H_INCLUDED
