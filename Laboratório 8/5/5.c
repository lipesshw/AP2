#include <stdio.h>
#include <stdlib.h>

int main()

int i=7, j=3, c;//Declaramos duas variaveis do tipo inteiro, i, j, c, sendo que "i" esta  recebendo o valor de 7 e "j" o valor de 3
int *p; //Declaramos uma variavel P do tipo inteiro ponteiro 
int *r; //Declaramos uma variavel r do tipo inteiro ponteiro 
p = &i; //p ta recebendo o endereço da variavel i
r = &p; //r ta recebendo o endereço da variavel p
c = *r + j; //c esta recebendo o valor 

return 0;
}

