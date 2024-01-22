#include <stdio.h>
#include <stdlib.h>

int main()

int i=99, j;//declaramos 2 variaveis do tipo inteiro sendo que i ja esta denifida como 99
int *p; //declaramos uma variavel do tipo ponteiro inteiro

p = &i; //p ta recebendo endereço da variavel i
j = *p + 300; //adiciona 300 ao valor obtido na desreferenciação do ponteiro p e atribui na variavel j;

return 0;
}
