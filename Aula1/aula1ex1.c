#include <stdio.h>
#include <stdlib.h>


//ler 1 numero inteiro e ver quantos digitos 7 tem, ex 8777 tem 3 7
int main()
{
    int a;
    int quan=0;
    printf("Digite um numero:");
    scanf("%d",&a);
    while(a>0)
    {
        if(a%10==7)
        {
            quan+=1;
        }
        a=a/10;
    }
    printf("\nA quantidade de numeros 7 eh: %d",quan);
    return 0;
}
