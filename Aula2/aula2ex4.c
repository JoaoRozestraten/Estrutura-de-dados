/*Determine um algoritmo iterativo e recursivo que calcule
a some de N números ímpares*/
#include <stdio.h>
#include <stdlib.h>
int fun(int n, int s)
{
    if(n>0)
    {
        if(s%2!=0)
        {
            return s+fun(n-1,s+1);
        }
        else
        {
            return fun(n,s+1);
        }
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,s=0;
    printf("\nDigite um numero: ");
    scanf("%d",&n);
    s=fun(n,s);
    printf("\nS:%d\n\n",s);
    return 0;
}
