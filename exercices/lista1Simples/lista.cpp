/*
arquivo contendo todos as funcoes implementadas*/
#include "lista.h"
#include <stdio.h> /*printf*/
#include <stdlib.h> /*malloc, calloc, free*/



/*Funcao que apaga todos os nos da lista L*/
void desalocar(celula* &L)
{
    celula *aux;

    while( L != NULL)
    {
        aux = L;

        L = aux->prox;

        free(aux);
    }
}


void inserir_fim(int n, celula* &lst)
{
    celula *novo, *p;

    novo = (celula*) malloc(sizeof(celula));
    novo->chave = n;
    novo->prox = NULL;

    if(lst == NULL)
        lst = novo;
    else{
        p = lst;
        while(p->prox != NULL)
            p = p->prox;

        p->prox = novo;
    }
}


void inserir_inicio(int n, celula* &lst)
{
    celula *novo;

    novo = (celula*) calloc(1, sizeof(celula));
    novo->chave = n;
    novo->prox = lst;
    lst = novo;
}


void remover(int x, celula* &lst)
{
    celula *p, *q;
    p = NULL;
    q = lst;
    while (q != NULL && q->chave != x) {
        p = q;
        q = q->prox;
    }
    if(q == NULL)
        printf("%d nao foi encontrado.", x);
    else{
        if (p != NULL)
            p->prox = q->prox;
        else
            lst = q->prox;

        free(q);
    }
}


/*Funcao imprime o campo chave armazenado em cada no da lista L*/
void imprimir(celula *lst)
{
    celula *p;
    for(p = lst; p != NULL; p = p->prox)
        printf("%d ", p->chave);

}

/* Item B da lista 1, sobre lista encadeada
Remover i-ésimo elemento(nó) de uma lista L.
Retorna ponteiro para o início a lista.
*/
celula* remove_i(int i, celula *L)
{
	celula *p, *q;
    p = NULL;
    q = L;
    for(int j=1; q!=NULL && j < i; j++){
    	p = q;
        q = q->prox;
	}
	
    if(q == NULL)
        printf("%d-esimo elemento nao foi encontrado.", i);
    else{
        if (p != NULL)
            p->prox = q->prox;
        else
            L = q->prox;

        free(q);
    }
    return L;
}

/* Item C da lista 1, sobre lista encadeada
Inserir elemento x após o i-ésimo elemento(nó) da lista L.
*/
void inserir_aposI(int x,int i,celula* &L){
	celula *novo, *p;

    novo = (celula*) malloc(sizeof(celula));
    novo->chave = x;
    novo->prox = NULL;

    if(L == NULL)
        L = novo;
    else{
        p = L;
        for(int j=1; p!=NULL && j < i; j++){
			p = p->prox;
		}
        novo->prox = p->prox;
        p->prox = novo;
        
    }
}


