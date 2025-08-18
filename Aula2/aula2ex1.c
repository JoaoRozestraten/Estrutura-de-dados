/* Elabore um programa que contenha uma função recebe 3
valores float (n1, n2, n3) e retornar o (x*x)+y+z. Os valores
devem ser lidos no programa principal, o resultado também
deve ser impresso no principal.
• Construa essa função de duas maneiras diferentes,
respeitando os cabeçalhos abaixo:
a. float calculo(float x,float y, float z)
b. void calculo(float x, float y, float z, float *r) */

#include <stdio.h>
#include <stdlib.h>
float calculo1(float x, float y, float z)
{
    return (x*x)+y+z;
}
void calculo2(float x,float y, float z, float *r)
{
    *r=(x*x)+y+z;
}
int main()
{
    float a,b,c,r,ou;
    printf("\nDigite 3 numeros:\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    printf("\nUsando retornando pela funcao tipo float:\n");
    r=calculo1(a,b,c);
    printf("\nR:%.2f",r);

    //pelo outro metodo

    calculo2(a,b,c,&ou);
    printf("\n\nAgora pela funcao void:\n\n");
    printf("R:%.2f\n\n",ou);

    return 0;
}
