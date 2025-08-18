#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que encontre a soma de S
S=1/1 -2/4 +3/9 -5/25 ... -10/100*/

int main()
{
    int count=1;
    int c=1;
    float sum=0;
    //Simplifiando todas as fraçoes fica 1/raiz(num) obs: nao precida de quadrados
    while(count<=10)
    {
        sum=  (sum + (float)1/count*c);
        c=c*-1;
        count++;
    }
    printf("\n\tA resposta eh: %f\n\t",sum);
}
