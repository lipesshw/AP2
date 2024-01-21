#include <stdio.h>
#include "substituir.h"

int main()
{
    int v[8]= {10,18,25,30,38,45,50,55};
    elemento(v);
    printf("novo vetor");
    for(int i=0;i<8;i++)
    {
        printf("\t %d ",v[i]);
    }
}
