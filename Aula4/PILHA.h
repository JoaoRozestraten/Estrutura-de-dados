#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
/* FUN ES DE MANIPULA O DE PILHA�� ��
Pilha* CriaPilha () CRIA A PILHA
No* ins_ini (No* t, int a) AUXILIAR DA INSER O��
void push (Pilha* p, int v) INSER O��
No* ret_ini (No* l) AUXILIAR DA REMO O��
int pop (Pilha* p) REMOVE RETORNANDO O VALOR QUE FOI REMOVIDO
Pilha* liberaPilha (Pilha* p) LIBERA A PILHA
void imprime (Pilha* p) IMPRIMA A PILHA
int vaziaPilha(Pilha *p) VERIFICA SE A PILHA EST VAZIA, RETORNA 1�
*/
typedef struct no
{
int info;
struct no *prox;
}No;

typedef struct pilha
{
No *Topo;
}Pilha;

Pilha* CriaPilha ()
{
Pilha *p;
p=(Pilha*)malloc(sizeof(Pilha));
p->Topo = NULL;
return p;
}

No* ins_ini (No* t, int a)
{
No* aux = (No*) malloc(sizeof(No));
aux->info = a;
aux->prox = t;
return aux;
}

int vaziaPilha(Pilha *p)
{
    if(p->Topo==NULL)
    {
        return 1;
    }
    return 0;
}

void push (Pilha* p, int v)
{
p->Topo = ins_ini(p->Topo,v);
}
No* ret_ini (No* aux)
{
No* p = aux->prox;
free(aux);
return p;
}

int pop (Pilha *p)
{
int v;
if (vaziaPilha(p))
{
printf("\n\n\t==> Pilha VAZIA, IMPOSSIVEL CONTINUAR.\b\n");
exit(1); /* aborta programa */
}
v = p->Topo->info;
p->Topo = ret_ini(p->Topo);
return v;
}



void imprime (Pilha* p)
{
    No *aux = p->Topo;
    if(aux==NULL)
    {
        printf("\n\tPilha vazia\n");
    }
    else
    {
        printf("\n\tPilha:\n\t");
        while(aux!=NULL)
        {
            printf("%d\n\t",aux->info);
            aux=aux->prox;
        }
    }

}

Pilha* liberaPilha (Pilha* p)
{
    No *aux;
    while(p->Topo!=NULL)
    {
        aux=p->Topo->prox;
        free(p->Topo);
        p->Topo=aux;
    }
    free (p);
    return NULL;

}

int lenP(Pilha* p)
{
    int a=0;
    No *aux=p->Topo;
    while(aux!=NULL)
    {
        a++;
        aux=aux->prox;
    }
    return a;
}


#endif // PILHA_H_INCLUDED

