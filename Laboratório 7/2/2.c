#include <stdio.h>
#include <stdlib.h>
#include "criptografia.h"

int main()
{
    char frase[]="Eu vou ao clube.";
    char substituto='*';
    printf("\t entrada: %s \n", frase);
    criptografia(frase,substituto,sizeof(frase)-1);
    printf("\t saida: %s \n",frase);
    return 0;
}
