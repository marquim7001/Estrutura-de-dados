#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include <time.h>

int main(int argc, char* argv[]){

  /* 
     No* n0 = no('2.0', NULL);
    No* n1 = no('3.0', NULL);
    No* n3 = no('5.0', NULL);
    lista_inserir_no(&n0, n2);
    lista_inserir_no(&n0, n1);
    lista_inserir_no(&n0, n3);
    lista_imprimir(n0);

    printf("\n");
    // n0 = NULL;
    lista_imprimir(n0);

    exit(0);

  */

    No* lista_nao_ordenada = NULL;
    No* lista_ordenada = NULL;

    FILE* arquivo = fopen("1kk_rand_float.csv", "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(1);
    }
}