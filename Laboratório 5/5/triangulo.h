//
// Created by lipeb on 03/12/2023.
//

#ifndef UNTITLED2_TRIANGULO_H
#define UNTITLED2_TRIANGULO_H

int Triangulo(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Triangulo Equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
        return 1;
    } else {
        printf("Nao forma um triangulo\n");
        return 0;
    }
}

#endif //UNTITLED2_TRIANGULO_H
