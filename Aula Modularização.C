#include <stdio.h>
#include <stdlib.h>

float Media()
{
    int i, total;
    float soma, valor, resultado;
    soma = 0;
    
    printf("\n\nDigite a quantidade total: \n");
    scanf("%d", &total);
    
    for (i = 1 ; i <= total ; i ++)
    {
        printf("\nDigite o %d valor:",i);
        scanf ("%f", &valor);
        soma = soma + valor;
    }
    
    resultado = soma / total;
    return resultado;
}

int main()
{
    printf("Média da turma %.1f", Media( ));
    printf("Média da escola: %1.f", Media( ));
    getchar();
}

