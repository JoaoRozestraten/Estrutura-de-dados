#include <stdio.h>
#include <stdlib.h>

/*O quadrado de um n�mero natural N � dado pela soma dos N
primeiros n�meros �mpares consecutivos*/

int main()
{
    int num;
    int res=0;
    int i=0;
    int contador=0;
    printf("\n\tDigite um numero: ");
    scanf("%d",&num);
    while(i<num)
    {
        contador++;
        if(contador%2!=0)
        {
            i++;
            res+=contador;
        }
    }
    printf("\n\tO quadrado do numero eh: %d\n\t",res);
    return 0;
}
