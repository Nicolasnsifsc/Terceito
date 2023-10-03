//
// Created by aluno on 03/10/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
    int dado;
    struct no_t *proximo;
}no_t;

//void soma(int a, int b, int *c)
//{
//    *c = a+b;
//}

void adicionar(no_t** inicio, int dado)
{
    no_t* novo = (no_t*) malloc(sizeof(no_t));
    novo->dado = dado;
    novo->proximo = *inicio;
    *inicio = novo;
}

bool remover(no_t* *inicio, int elemento)
{
    no_t* atual = *inicio;
    no_t* anterior = NULL;
    while (atual != NULL)
    {
        if(atual->dado  == elemento){
            if(anterior == NULL){
                *inicio = atual->proximo;

            }else{
                //Para os demais elementos
                anterior->proximo = atual->proximo;
            }
            free(atual);
            return true;
        }
        anterior = atual;
        atual = atual->proximo;
    }
     return false;
}


void destruir(no_t** inicio)
{
    no_t* atual = *inicio;
    no_t* proximo = NULL;
    while (atual != NULL)
    {
        proximo = atual->proximo;
        free(atual);
        atual->proximo;
    }
    *inicio = NULL;
}

int main()
{
    //int resultado;
    //int a = 1;
  no_t *inicio = NULL;

    //printf("\n");
    //soma(a,2,&resultado);
    adicionar(&inicio, 1);
    adicionar(&inicio, 2);
    adicionar(&inicio, 3);
    adicionar(&inicio, 4);

    remover(&inicio, 2);


    while (inicio != NULL)
    {
        printf("%d ", inicio->dado);
        inicio = inicio->proximo;

    }
    destruir(&inicio);
    return 0;
}