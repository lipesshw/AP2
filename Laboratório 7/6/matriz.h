//
// Created by lipeb on 21/01/2024.
//

#ifndef LAB7_MATRIZ_H
#define LAB7_MATRIZ_H

void substituirParesPor1000(int matriz[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                matriz[i][j] = 1000;
            }
        }
    }
}

#endif //LAB7_MATRIZ_H
