#include <stdio.h>

    //passo 1: (criando a estrutura...)
    struct matricula
    {
        int mat;
        char nome[30];
        float n1,n2;
    };
    
    //passo 2: (definindo um vetor e lendo as variáveis...)
    struct matricula v[3];
    int i;
    

int main()
{

    
    for(i=0; i<3; i++)
    {
        printf("\nDigite o número da matricula: ");
        scanf("%d", &v[i].mat);

        printf("Digite o nome do aluno: ");
        scanf("%s", v[i].nome);
        
        printf("Digite a primeira nota do aluno: ");
        scanf("%f", &v[i].n1);
        
        printf("Digite a segunda nota do aluno: ");
        scanf("%f", &v[i].n2);
        
    };
    
    
    for(i=0; i<3; i++) {
        printf("\nMatrícula: %d\tNome: %s\t Média: %.1f;", v[i].mat, v[i].nome, (v[i].n1+v[i].n2)/2);
    }
    
    return 0;
}

