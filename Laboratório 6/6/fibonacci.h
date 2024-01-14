//
// Created by lipeb on 14/01/2024.
//

#ifndef LAB6_FIBONACCI_H
#define LAB6_FIBONACCI_H

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

#endif //LAB6_FIBONACCI_H
