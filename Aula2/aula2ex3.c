/*Escreva uma função recursiva, ImprimeSerie(i,j,k: inteiro),
que imprime na tela a série de valores do intervalo [i,j],
com incremento k.*/
#include <stdio.h>
#include <stdlib.h>
void imp(int i,int j,int k)
{
    if(i<=j)
    {
        printf("\nN:%d",i);
        imp(i+k,j,k);
    }
}

int main()
{
    int i,j,k;
    printf("Digite 3 numeros:\n");
    scanf("%d",&i);
    scanf("%d",&j);
    scanf("%d",&k);
    imp(i,j,k);
    return 0;
}
