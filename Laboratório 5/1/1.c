#include <stdio.h>
#include <stdlib.h>
#include "questoes.h"
#include <locale.h>


void Exercicio(int questao) {
    switch(questao) {
    case 1:
    printf("\n 1 – Criar um menu iterativo para selecionar os exercicios da lista. Usando o modulo void Exercicio (int questao), invoque o exercício que devera estar salvo numa biblioteca *.h. \n\n");
    break;

    case 2:
    printf("\n 2 – (Elabore um arquivo com extensão .h) Crie uma função int Positivo_Negativo (int n), que receba um valor e retorne 1 se o número digitado for positivo ou 0 se o número for negativo. \n\n");
    break;

    case 3:
    printf("\n 3 – (Elabore um arquivo com extensão .h) Crie a função int Mdc (int a, int b), que calcule o máximo divisor comum entre os dois valores. Dica: Use o algoritmo de Euclides. \n\n");
    break;

    case 4:
    printf("\n 4 - (Elabore um arquivo com extensão .h) Crie uma função chamada int Primo (int num) que verifica se o valor num (positivo, faça o tratamento de erro antes) que é passado por valor é primo, se for primo retorne 1 e caso contrário, retorne 0. \n\n");
    break;

    case 5:
    printf("\n 5 - (Elabore um arquivo com extensão .h) Crie o módulo int Triangulo (int a, int b, int c), que verifique se os valores passados formam um triângulo e se formarem o triângulo, imprima na tela o tipo de triângulo. \n\n");
    break;

    case 6:
    printf("\n 6 – (Elabore um arquivo com extensão .h) Matematicamente, calcular as combinações possíveis é contar quantos subconjuntos podemos formar com parte dos elementos do conjunto. Diferentemente do arranjo e da permutação, na combinação, a ordem não é importante, então, o conjunto não é ordenado. Para calcular a combinação, utilizamos a Equação 1:. \n\n");
    break;
     case 7:
    printf("\n 7 – (Elabore um arquivo com extensão .h) Uma garagem de estacionamento cobra R$2,00 de taxa mínima para estacionar até três horas. A garagem cobra um adicional de R$0,50 por hora ou fração caso sejam excedidas as três horas. A taxa máxima para qualquer período determinado de 24 horas é R$10,00. Admita que nenhum carro fique estacionado por mais de 24 horas. Escreva um programa que calcule e imprima as taxas de estacionamento para três clientes que estacionaram ontem seus carros nessa garagem. Você deve fornecer as horas que cada cliente ficou estacionado. Seu programa deve imprimir os resultados organizados em um formato de tabela e deve calcular e imprimir o total recebido no dia de ontem. O programa deve usar a função calcula-Taxas para determinar o valor a ser cobrado de cada cliente. A saída de seu programa deve ter o seguinte formato:\n\n");
    break;
    }

}

int main(){
  setlocale(LC_ALL,"portuguese");
    int escolha;

    do {
        printf("---- MENU ----\n");
        printf("1. Exercicio 1\n");
        printf("2. Exercicio 2\n");
        printf("3. Exercicio 3\n");
        printf("4. Exercicio 4\n");
        printf("5. Exercicio 5\n");
        printf("6. Exercicio 6\n");
        printf("7. Exercicio 7\n\n");

        printf("8. Sair\n\n");
        scanf("%d", &escolha);

    if (escolha != 8) {
        Exercicio(escolha);
    }

    } while (escolha != 8);


        printf("\n\nPrograma finalizado com sucesso!");
    return 0;
}

