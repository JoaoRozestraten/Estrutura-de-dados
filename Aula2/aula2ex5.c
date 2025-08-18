/*Faça uma função recursiva que permita somar os
elementos de um vetor de inteiros.*/
#include <stdio.h>
#include <stdlib.h>
int fun(int v[],int i)
{
    if (i>=0)
    {
        return v[i]+fun(v,i-1);
    }
    else
    {
        return 0;
    }

}
int main()
{
    int v[5]={1,2,3,4,5}; //soma esperada = 15
    int i=4;
    int soma;
    soma=fun(v,i);
    printf("Soma: %d\n\n",soma);
}
