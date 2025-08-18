#include <stdio.h>
#include <stdlib.h>


//Sem usar vetor mostre:
/*
A quantidade de números positivos lidos
A soma dos números que são múltiplos de 3 maiores que 10
A quantidade de múltiplos de 3
O percentual de múltiplos de 7
Pare quando digitar um numero negativo
*/

int main()
{
    int num;
    int soma3=0;
    int m3=0;
    float p7=0;
    int total=0;
    do
    {
        printf("\n\tDigite um numero:");
        scanf("%d",&num);
        if(num>0)
        {
            if(num%3==0)
            {
                m3++;
                if(num>10)
                {
                    soma3+=num;
                }
            }
            if(num%7==0)
            {
                p7++;
            }
        }
        total++;
    }while(num>=0);
    total=total-1;  //Tirando o ultimo numero que eh negativo da contagem
    printf("\n\tO total de numeros positivos lidos foi: %d",total);
    printf("\n\tA soma dos numeros multiplos de 3 maiores que 10 eh: %d",soma3);
    printf("\n\tA quantidade de numeros multiplos de 3 eh: %d",m3);
    p7=(p7/total)*100;
    printf("\n\tA porcentagem de numeros 7 eh: %0.2f",p7);

    return 0;

}
