/*Elabore um programa que leia 3 números inteiros. Este
programa deverá ter uma função que retorne o fatorial de um
número. Use essa função, para calcular o fatorial dos números
lidos (imprima no programa principal).*/
#include <stdio.h>
#include <stdlib.h>
#define max 3
int fun(int num)
{
    if (num>1)
    {
        return num*fun(num-1);
    }
    else
    {
        return 1;
    }

}
int main()
{
    int i,n;
    for(i=0;i<max;i++)
    {
        printf("\nDigite um numero: ");
        scanf("%d",&n);
        n=fun(n);
        printf("\nO fatorial do numero eh: %d\n\n",n);
    }
}
