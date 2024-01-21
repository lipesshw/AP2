#include <stdio.h>
#include "crescente.h"

int main()
{
    float v[3]= {2.5,1.9,8.0};
    ordena(v);
    printf("%.2f %.2f %.2f", v[0],v[1],v[2]);
}
