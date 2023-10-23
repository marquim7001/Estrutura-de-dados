#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No* no(float valor, No* proximo_no){
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->proximo_no = proximo_no;
    return no;
}

void lista_inserir_no(No* L, No* no){
    if(L != NULL){
        if(L->proximo_no == NULL){
            L->proximo_no = no;
        }
        else{
            lista_inserir_no(L->proximo_no, no);
        }
    }
}


void lista_inserir_no_ordenado(No** L, No* no){
    if(*L != NULL){
        if((*L)->valor >= no->valor){
            no->proximo_no = *L;
            *L = no;
        } else if ((*L)->proximo_no != NULL) {
            lista_inserir_no_ordenado(&(*L)->proximo_no, no);
        } else {
            (*L)->proximo_no = no;
        }
    }
}

void lista_imprimir(No* L){
    if(L != NULL){
        printf("%f ", L->valor);
        lista_imprimir(L->proximo_no);
    } else {
        printf("ERRO");
    }
}