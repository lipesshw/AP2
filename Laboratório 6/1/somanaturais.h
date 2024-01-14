//
// Created by lipeb on 14/01/2024.
//

#ifndef LAB6_SOMANATURAIS_H
#define LAB6_SOMANATURAIS_H

int somaNaturais(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + somaNaturais(n - 1);
    }
}

#endif //LAB6_SOMANATURAIS_H
