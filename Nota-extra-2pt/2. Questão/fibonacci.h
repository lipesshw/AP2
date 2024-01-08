#ifndef FIBONACCI_H_INCLUDED
#define FIBONACCI_H_INCLUDED

#include <math.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int soma(int N) {
    int i;
    int resultado = 1;

    for (i = 1; i <= N; i++) {
        resultado += fibonacci(i) / i;
    }

    return resultado;
}

#endif // FIBONACCI_H_INCLUDED
