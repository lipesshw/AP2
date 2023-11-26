//
// Created by lipeb on 26/11/2023.
//

#ifndef UNTITLED2_FIBONACCI_H
#define UNTITLED2_FIBONACCI_H

long long calcularFibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return calcularFibonacci(n - 1) + calcularFibonacci(n - 2);
    }
}

#endif //UNTITLED2_FIBONACCI_H
