/*Elabore um programa que leia 3 n�meros inteiros. Este
programa dever� ter uma fun��o que retorne o fatorial de um
n�mero. Use essa fun��o, para calcular o fatorial dos n�meros
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
