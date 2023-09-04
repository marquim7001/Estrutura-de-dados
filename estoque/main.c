#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"

int main(int argc, char* argv[]){

    int opcao=0;
    int qtdProdutos =0;
    Produto produtos[100];

        while(opcao!=5){
            
            printf("\n");
            printf("1- adicionar produto\n");
            printf("2- listar produto\n");
            printf("3- editar produto\n");
            printf("4- remover produto\n");
            printf("5- encerrar sistema\n");
            scanf("%d", &opcao);
            system("cls");

            switch(opcao){

                case 1 : 
                    qtdProdutos += adicionar_produtos(produtos, qtdProdutos); 
                    break;
                case 2 :
                    listar_produtos(produtos, qtdProdutos); 
                break;

                case 3 :
                    editar_produtos(produtos, qtdProdutos);
                break;

                case 4:
                    qtdProdutos += remover_produtos(produtos, qtdProdutos); 
                    break;
                case 5:
                    printf("encerrando sistema");
                    break;

                default:
                    printf("Opcao invalida");
            }
        }

    exit(0);

}
