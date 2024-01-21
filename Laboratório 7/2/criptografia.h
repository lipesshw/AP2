//
// Created by lipeb on 21/01/2024.
//

#ifndef LAB7_CRIPTOGRAFIA_H
#define LAB7_CRIPTOGRAFIA_H

void criptografia(char *p, char v, int tam)
{
    int i;
    for (i=0; i<tam; i++)
    {
        if(p[i]=='a' || p[i]=='e' || p[i]=='i' || p[i]=='o' || p[i]=='u' ||p[i]=='A' || p[i]=='E' || p[i]=='I' || p[i]=='O' || p[i]=='U' )
        {
            p[i]= v;
        }

    }
}

#endif //LAB7_CRIPTOGRAFIA_H
