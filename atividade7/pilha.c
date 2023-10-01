#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* criarPilha() {
    Pilha* pilha = (Pilha*)malloc(sizeof(pilha));
    pilha->topo = -1;
    return pilha;
}

int estaVazio(Pilha* pilha) {
    return pilha->topo == -1;
}

int estaCheio(Pilha* pilha) {
    return pilha->topo == 100 - 1;
}

void empilhar(Pilha* pilha, int valor) {
    if (!estaCheio(pilha)) {
        pilha->numero[++pilha->topo] = valor;
    } else {
        printf("A pilha está cheia. Não é possível adicionar mais elementos.\n");
    }
}

int desempilhar(Pilha* pilha) {
    if (!estaVazio(pilha)) {
        return pilha->numero[pilha->topo--];
    } else {
        printf("A pilha está vazia. Não é possível desempilhar.\n");
        return -1;
    }
}