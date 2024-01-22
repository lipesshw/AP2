#include <stdio.h>
#include <stdlib.h>

int main()

int a=5, b=12; //Declaramos duas variaveis do tipo inteiro, sendo elas "a" recebendo o valor de 5 e "b" o valor de 12
int *p; //Declaramos uma variavel P do tipo inteiro ponteiro 
int *q; //Declaramos uma variavel P do tipo inteiro ponteiro 
p = &a; //p ta recebendo o endereço da variavel a
q = &b; //q ta recebendo o endereço da variavel b
int c = *p + *q; //Declaramos uma variavel c do tipo inteiro para receber o conteudo da variavel a e b referénciados em  p e q

return 0;
}
