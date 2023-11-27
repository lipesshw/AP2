#ifndef MDC_H_INCLUDED
#define MDC_H_INCLUDED

int mdc(int a, int b){
    int resto;

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

#endif // MDC_H_INCLUDED
