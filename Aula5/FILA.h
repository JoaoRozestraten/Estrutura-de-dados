#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

/* FUNÇÕES DE MANIPULAÇÃO DE PFILA

Fila* CriaFila()  CRIA A FILA

int VaziaFila (Fila* f) VERIFICA SE A FILA ESTÁ VAZIA RETORNA 1 QUANDO ESTÁ VAZIA

void InsereFila (Fila* f, int v) INSERÇÃO

int RetiraFila (Fila* f) REMOÇÃO

Fila* liberaFila (Fila* f) LIBERA A FILA

void imprimeFila (Fila* f)IMPRIME A FILA
*/
typedef struct nos
{
    int info;
    struct nos *prox;
}Nos;

typedef struct fila
{
    Nos * ini;
    Nos * fim;
} Fila;

typedef struct no
{
int info;
struct no *prox;
}No;

typedef struct pilha
{
No *Topo;
}Pilha;

int VaziaFila (Fila* f)
{
    if (f->ini==NULL) return 1;
    return 0;

}


Fila* CriaFila ()
{
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

Nos* ins_fim (Nos *fim, int A)
{
    Nos *p = (Nos*)malloc(sizeof(Nos));
    p->info = A;
    p->prox = NULL;
    if (fim != NULL) /* verifica se lista não estava vazia */
    fim->prox = p;
    return p;
}

void InsereFila (Fila* f, int v)
{
    f->fim = ins_fim(f->fim,v);
    if (f->ini==NULL) /* fila antes vazia? */
    f->ini = f->fim;
}

Nos* retira_ini (Nos* ini)
{
    Nos* p = ini->prox;
    free(ini);
    return p;
}

int RetiraFila (Fila* f)
{
    int v;
    if (VaziaFila(f))
    {
        printf("Fila vazia.\n");
        exit(0); /* aborta programa */
    }
    v = f->ini->info;
    f->ini = retira_ini(f->ini);
    if (f->ini == NULL) /* fila ficou vazia? */
    f->fim = NULL;
    return v;
}

void imprimeFila (Fila* f)
{
    Nos* q;
    printf("\n\t\t");
    for (q=f->ini; q!=NULL; q=q->prox)
    {
        printf("%d - ",q->info);
    }
    printf("\n");
}


Fila* liberaFila (Fila* f)
{
    Nos* q = f->ini;
    while (q!=NULL)
    {
        Nos* t = q->prox;
        free(q);
        q = t;
    }
    free(f);
    return NULL;
}



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



#endif // FILA_H_INCLUDED
