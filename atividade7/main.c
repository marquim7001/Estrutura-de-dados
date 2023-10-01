#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include "fila.h"

// int main() {
//     Pilha* pilhaDesfazer = criarPilha();
//     Pilha* pilhaRefazer = criarPilha();
//     int valorAtual = 0;
//     char operacao;

//     while (1) {
//         printf("Valor atual: %d\n", valorAtual);
//         printf("Operação (+, -, *, /, d para desfazer, r para refazer, s para sair): ");
//         scanf(" %c", &operacao);

//         if (operacao == 's') {
//             break;
//         } else if (operacao == 'd') {
//             if (!estaVazio(pilhaDesfazer)) {
//                 empilhar(pilhaRefazer, valorAtual); 
//                 valorAtual = desempilhar(pilhaDesfazer);
//             } else {
//                 printf("Nada para desfazer.\n");
//             }
//         } else if (operacao == 'r') {
//             if (!estaVazio(pilhaRefazer)) {
//                 empilhar(pilhaDesfazer, valorAtual); 
//                 valorAtual = desempilhar(pilhaRefazer);
//             } else {
//                 printf("Nada para refazer.\n");
//             }
//         } else if (operacao == '+' || operacao == '-' || operacao == '*' || operacao == '/') {
//             int operador;
//             printf("Digite o operador: ");
//             scanf("%d", &operador);

//             empilhar(pilhaDesfazer, valorAtual); 
//             switch (operacao) {
//                 case '+':
//                     valorAtual += operador;
//                     break;
//                 case '-':
//                     valorAtual -= operador;
//                     break;
//                 case '*':
//                     valorAtual *= operador;
//                     break;
//                 case '/':
//                     if (operador != 0) {
//                         valorAtual /= operador;
//                     } else {
//                         printf("Divisão por zero não é permitida.\n");
//                     }
//                     break;
//             }
            
//             // Tira todos os elementos da pilha quando não precisar da pilha de refazer 
//             while (!estaVazio(pilhaRefazer)) {
//                 desempilhar(pilhaRefazer);
//             }
//         } else {
//             printf("Operação inválida.\n");
//         }
//     }

//     free(pilhaDesfazer);
//     free(pilhaRefazer);

//     return 0;
// }

int main() {
    struct FilaPedidos filaFarmacia;
    inicializarFila(&filaFarmacia);

    int contadorPedidos = 1;

    while (1) {
        int escolha;
        printf("\nEscolha uma opção:\n");
        printf("1. Fazer um pedido\n");
        printf("2. Atender um pedido\n");
        printf("3. Ver Pedidos\n");
        printf("4. Sair\n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: {
                struct Pedido novoPedido;
                novoPedido.numero_pedido = contadorPedidos++;
                printf("Nome do cliente: ");
                scanf("%s", novoPedido.nome_cliente);
                printf("Nome do medicamento: ");
                scanf("%s", novoPedido.nome_medicamento);
                printf("Quantidade: ");
                scanf("%d", &novoPedido.quantidade);
                enfileirar(&filaFarmacia, novoPedido);
                break;
            }
            case 2: {
                if (!filaVazia(&filaFarmacia)) {
                    desenfileirar(&filaFarmacia);
                } else {
                    printf("A fila de pedidos está vazia.\n");
                }
                break;
            }
            case 3:
                listarPedidos(&filaFarmacia);
                break;
            case 4:
                exit(0);
            default:
                printf("Opção inválida.\n");
                break;
        }
    }

    return 0;
}