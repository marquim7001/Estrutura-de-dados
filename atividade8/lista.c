#include <stdio.h>
#include <stdlib.h>
#include " lista.h "



No* no(char valor , No* proximo_no){
    No*no= malloc(sizeof(No));
    no -> valor =valor;
    no -> proximo_no = proximo_no;
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


void lista_imprimir(No* L){
    if (L != NULL){
        printf("%c", L -> valor);
        lista_imprimir(L -> proximo_no);
    }
}

int lista_quantidade_nos(No* L){
    if(L !=NULL){
        return 1 + lista_quantidade_nos(L -> proximo_no);
    }
    return 0; 
}

No* lista_copiar(No* L){
    if(L != NULL){
        no(L -> valor, lista_copiar(L -> proximo_no));
    }
    return NULL;

}

void lista_concatenar(No* L, No Lc){
    listar_inserir_no(L, Lc);
}

void lista_liberar(No* L){
    if(L != NULL){
        lista_liberar(L-> proximo_no);
        free(L);
    }
}

int lista_verificar_existencia(No* L, char valor_busca){
    if(L != NULL){
        if(L->valor == valor_busca) {
            return 1;
        }
        return lista_verificar_existencia(L->proximo_no, valor_busca);
    }

    return 0;
}

int lista_verificar_ocorrencias(No* L, char valor_busca){
    int qtd = 0;

    if(L != NULL){
        if(L->valor == valor_busca){
            qtd = 1;
        } else {
            qtd = 0;
        }
        return qtd + lista_verificar_ocorrencias(L->proximo_no, valor_busca);
    }

    return 0;
}

void lista_imprimir_inversa(No* L) {
    if (L != NULL) {
        lista_imprimir_inversa(L->proximo_no);
        printf("%c", L->valor);
    }
}


void lista_inserir_no_i(No* L, int i, char valor) {
    if (i < 0 || i > lista_quantidade_nos(L) - 1) {
        printf("posicao invalida");
        exit(0);
    }

    if(i == 0) {
        No* novo_no = no(valor, L->proximo_no);
        L->proximo_no = novo_no;
    } else if (L != NULL) {
        lista_inserir_no_i(L->proximo_no, i - 1, valor);
    }
}


void lista_remover_no_i(No* L, int i) {
    if (i < 0 || i > lista_quantidade_nos(L) - 1) {
        printf("Posicao menor que 0 nao e valida.\n");
        exit(0);
    }

    if(i == 0) {
        No* no_a_remover = L->proximo_no;
        L->valor = no_a_remover->valor;
        L->proximo_no = no_a_remover->proximo_no;
        free(no_a_remover);
    } else if (L != NULL) {
        lista_remover_no_i(L->proximo_no, i - 1);
    } else {
        printf("Posicao fora do alcance da lista.\n");
    }
}


void lista_remover_no(No* L, char valor) {
    if (L == NULL) {
        return; 
    }

    if (L->proximo_no != NULL && L->proximo_no->valor == valor) {
      
        No* no_a_remover = L->proximo_no;
        L->proximo_no = no_a_remover->proximo_no;
        free(no_a_remover);
        lista_remover_no(L, valor); 
    } else {
       
        lista_remover_no(L->proximo_no, valor);
    }
}