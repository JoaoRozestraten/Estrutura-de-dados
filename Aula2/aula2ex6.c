/*Elabore uma função recursiva que determina o elemento
máximo de um vetor*/
#include <stdio.h>
#include <stdlib.h>
void fun(int v[],int m,int i,int *p)
{
    if(i<=6)
    {
        if(v[i]>v[m])
        {
            m=i;
        }
        i++;
        fun(v,m,i,p);
    }
    else
    {
        *p=m;
    }
}
int main()
{
    int v[7]={0,9,1,4,5,10,3}; //maior eh 10
    int m=0;
    int i=1;
    int mai;
    fun(v,m,i,&mai);
    printf("Maior: %d\n\n",v[mai]);
}
