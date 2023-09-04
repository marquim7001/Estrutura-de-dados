#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"

int adicionar_produtos(Produto *produtos, int qtdProdutos){
    Produto p;
    int idExistente =0;

    printf("\n");
    printf("Digite o nome do produto\n");
    scanf("%s", &p.nome);

    printf("Digite o ID do produto\n");
    scanf("%d", &p.id);

    printf("Digite a quantidade do produto\n");
    scanf("%d", &p.qtd);

    printf("Produto: %d - %s- %d", p.nome, p.id, p.qtd);


    for(int i =0; i <qtdProdutos; i ++){

        if(produtos[i].id == p.id){
            printf("\nID JA CADASTRADO");
            idExistente = 1;
        }

    }

    if(!idExistente){
        produtos[qtdProdutos] = p;
        return 1;
    }

    return 0; 
}

void listar_produtos(Produto* produtos, int qtdPordutos){

    for(int i=0; i < qtdProdutos;i++){
        printf("%d-%s-%d", produtos[i].id, produtos[i].nome, produtos[i].qtd);
    }

}

void editar_produtos(Produto* produtos, int qtdPordutos){
    int id;
    int qtd;

        printf("Informe o ID do produto\n"  );
        scanf("%d", &id);
 
     for(int i=0; i < qtdProdutos;i++){
        if(produtos[i].id ==id){
            printf("Informe a quantidade atual\n"  );
        scanf("%d", &id);
        produtos[i].qtd = qtd;
        }
    }

}

void remover_produtos(Produto *produtos, int qtdProdutos){

    int id;
    int removeu =0;
        printf("Informe o ID do produto\n"  );
        scanf("%d", &id);
 
     for(int i=0; i < qtdProdutos;i++){
        if(produtos[i].id ==id){
            produtos[i] = produtos[qtdProdutos -1];
            removeu =-1 ;
        }
    }

    return removeu;

}