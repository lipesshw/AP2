#include <stdio.h>
#include <stdlib.h>


int soma(int a, int b) {
    return(a + b);
}

int main()
{
    int x, y, res;
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    res = soma(x,y);

    printf("\nO resultado e igual a %d.", res);
}
