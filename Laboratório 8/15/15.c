#include <stdio.h>
#include <math.h>

struct Ponto {
    double x;
    double y;
};

double calcularDistancia(struct Ponto *ponto) {
    return sqrt(pow(ponto->x, 2) + pow(ponto->y, 2));
}

int main() {
    struct Ponto ponto1 = {3.0, 4.0};

    double distancia = calcularDistancia(&ponto1);

    printf("A distância do ponto (%.2f, %.2f) até a origem é %.2f\n", ponto1.x, ponto1.y, distancia);

    return 0;
}
