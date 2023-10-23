#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]){

    FILE *arquivo;
    char linha[5];
    float numero;
    No* lista_nao_ordenada = NULL;
    No* lista_ordenada = NULL;

    arquivo = fopen("1kk_rand_float.csv", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo");
        return 1;
    }

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        numero = atof(linha);
        if (lista_nao_ordenada == NULL) {
            lista_nao_ordenada = no(numero, NULL);
            lista_ordenada = no(numero, NULL);
        } else {
            No* n0 = no(numero, NULL);
            lista_inserir_no(lista_nao_ordenada, n0);
            lista_inserir_no_ordenado(&lista_ordenada, n0);
        }
    }

    lista_imprimir(lista_nao_ordenada);
    // lista_imprimir(lista_ordenada);

    exit(0);
}