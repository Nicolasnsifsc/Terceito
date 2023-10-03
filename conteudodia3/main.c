//
// Created by aluno on 03/10/23.
//
#include <stdio.h>

typedef struct
{
    int dado;
    struct no_t *proximo;
}no_t;




int main()
{
    no_t primeiro;
    no_t segundo;
    no_t terceiro;

    primeiro.dado = 1;
    primeiro.proximo = NULL;

    segundo.dado = 2;
    segundo.proximo = NULL;

    terceiro.dado = 3;
    terceiro.proximo = NULL;

    primeiro.proximo = &segundo;
    segundo.proximo = &terceiro;

    no_t *inicio = &primeiro;

    while (inicio != NULL)
    {
        printf("%d", inicio->dado);
        inicio = inicio->proximo;

    }


}