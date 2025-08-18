#include <stdio.h>
#include <stdlib.h>

/*Dada a sequência matemática de números 2, 3, 5,8,13, 21....
Construa um programa que calcule a soma desta sequência
para os N primeiros termo onde, N é fornecido pelo usuário.
Exemplo: N=5 S= 2+3+5+8+13 =31 */

int seq (int num)
{
    int sum=0;
    int b=2,bn=1,c;
    int i;
    for(i=0;i<num;i++)
    {
        printf("\n\tB: %d   N: [%d]",b,i);
        sum+=b;
        c=b;
        b=bn+b;
        bn=c;
    }
    return sum;
}
int main ()
{
    int n;
    printf("\n\tDigite um numero: ");
    scanf("%d",&n);
    n=seq(n);
    printf("\n\tSoma: %d\n\t",n);
}
