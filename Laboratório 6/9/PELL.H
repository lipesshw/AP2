//
// Created by lipeb on 14/01/2024.
//

#ifndef LAB6_PELL_H
#define LAB6_PELL_H

int pell(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return 2 * pell(n - 1) + pell(n - 2);
    }
}

#endif //LAB6_PELL_H
