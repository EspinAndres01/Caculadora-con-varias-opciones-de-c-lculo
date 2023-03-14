#ifndef DECIFRACC_H_INCLUDED
#define DECIFRACC_H_INCLUDED

#include<stdio.h>

void decimalFraccion(float num){
    float a,b;
    float aux;

    a=1;
    b=1;
    aux=1;
    while(!(aux==num)){
        aux=a/b;
        if(aux<num){
            a++;
        }else{
            if(aux>num){
                a--;
                b++;
            }
        }
    }
    printf("\nEl decimal transformado a fraccion es: %.0f/%.0f\n",a,b);
}


#endif // DECIFRACC_H_INCLUDED
