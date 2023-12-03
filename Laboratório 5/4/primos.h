//
// Created by lipeb on 03/12/2023.
//

#ifndef UNTITLED2_PRIMOS_H
#define UNTITLED2_PRIMOS_H

int Primo(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

#endif //UNTITLED2_PRIMOS_H
