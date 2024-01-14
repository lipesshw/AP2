//
// Created by lipeb on 14/01/2024.
//

#ifndef LAB6_FATORIAL_H
#define LAB6_FATORIAL_H

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int fatorialQuadruplo(int n) {
    return fatorial(2 * n) / fatorial(n);
}

#endif //LAB6_FATORIAL_H
