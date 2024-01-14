//
// Created by lipeb on 14/01/2024.
//

#ifndef LAB6_TRIBONACCI_H
#define LAB6_TRIBONACCI_H

int tribonacci(int n) {
    if (n == 0 || n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    }
}

#endif //LAB6_TRIBONACCI_H
