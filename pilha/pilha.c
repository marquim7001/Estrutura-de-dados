#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* pilha(){
    Pilha p;
    p.topo = NULL;
    p.quantidade =0;
    Pilha* p1 = &p;
    return &p1;

}

void empilhar(Objeto* o, Pilha* P){
    o->proximo_objeto = P->topo;
    P->topo = o;
    P->quantidade++;
}

Objeto desempilhar (Pilha P ){
    Objeto* o = P->topo;
    P->topo = o.proximo_objeto;
    P->quantidade--;
    return o;
}