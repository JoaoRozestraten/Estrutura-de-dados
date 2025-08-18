#include <stdio.h>
#include <stdlib.h>
#define max 15
/*Fazer um programa em C para ler um vetor de inteiros
positivos de 15 posições, no máximo. Imprimir a quantidade
de números pares e a quantidade de múltiplos de 5*/
void ler(int vet[],int *pnp,int *pm5)
{
    int mai;
    int i;
    do
    {
        printf("\n\tQuantos numeros voce gostaria de escrever [Maximo %d obs: escreva um numero positivo] : ",max);
        scanf("%d",&mai);
    }while(!(mai>0 && mai<max));

    for(i=0;i<mai;i++)
    {
        printf("\n\tDigite um numero para vet[%d]: ",i);
        scanf("%d",&vet[i]);
        if(vet[i]!=0)
        {
            if(vet[i]%2==0)
            {
                (*pnp)++;
            }
            if(vet[i]%5==0)
            {
                (*pm5)++;
            }
        }
    }
}
int main ()
{
    int vet[max];
    int *pnp,*pm5;
    int np=0,m5=0;
    pnp=&np;
    pm5=&m5;
    ler(vet,pnp,pm5);
    printf("\n\tNumeros Pares: %d\n\tNumeros multiplos de 5: %d\n\t",*pnp,*pm5);
    return 0;
}
