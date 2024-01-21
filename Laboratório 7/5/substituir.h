//
// Created by lipeb on 21/01/2024.
//

#ifndef LAB7_SUBSTITUIR_H
#define LAB7_SUBSTITUIR_H

int elemento(int*v){
    int i;
    for(i=0;i<8;i++){
        if(v[i]>=15&&v[i]<=20){
            v[i]=0;
        }
    }
}


#endif //LAB7_SUBSTITUIR_H
