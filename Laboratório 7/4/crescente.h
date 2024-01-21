//
// Created by lipeb on 21/01/2024.
//

#ifndef LAB7_CRESCENTE_H
#define LAB7_CRESCENTE_H

float trocar(float *a,float *b)
{
    float aux=*a;
    *a=*b;
    *b=aux;
}
float ordena(float v[3])
{
    int i,j;

    for(i=0; i<3; i++)
    {

        for(j=0;j<3-i-1; ++j)
        {
            if(v[j]>v[j+1])
            {
                trocar(&v[j],&v[j+1]);
            }
        }
    }
}

#endif //LAB7_CRESCENTE_H
