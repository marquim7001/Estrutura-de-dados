#include <stdio.h>
#include <stdlib.h>
#include "tabela_hash.h"

int main(int argc, char* argv[]){


    hash_table_put("chave1", "valor1");
    hash_table_put("chave2", "valor2");
    hash_table_put("chave3", "valor3");

    printf("Valor associado à chave1: %s\n", hash_table_get("chave1"));

    printf("Contém chave2 na tabela: %s\n", hash_table_contains("chave2") ? "Sim" : "Não");

    hash_table_remove("chave2");

    printf("Contém chave2 na tabela após remoção: %s\n", hash_table_contains("chave2") ? "Sim" : "Não");

    return 0;
}





