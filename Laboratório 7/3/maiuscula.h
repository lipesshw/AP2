//
// Created by lipeb on 21/01/2024.
//

#ifndef LAB7_MAIUSCULA_H
#define LAB7_MAIUSCULA_H

void maiuscula(char *str)
{
    while(*str){
        *str= toupper(*str);
        str++;
    }
}



#endif //LAB7_MAIUSCULA_H
