#include <stdio.h>
#include "maiuscula.h"

int main()
{
    char frase[]="ola";
    printf("\t entrada: %s \n", frase);
    maiuscula(frase);
    printf("\t saida: %s \n",frase);
    return 0;
}
