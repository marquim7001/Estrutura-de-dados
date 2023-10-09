#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main(int argc, char *argv[]) {


No* n0 = no("C", NULL);
No* n1 = no("E", NULL);
No* n2 = no("A", NULL);
No* n3 = 

lista_inserir_no(n0,n1);
lista_inserir_no(n0,n2);
lista_inserir_no(n0,n3);
lista_imprimir(n0);
printf("\nqtd nos: %d", lista-quantidade_nos(n0));

No* n_copia = lista_copiar(n0);
printf("\n");
lista_imprimir(n_copia);
lista_concatenar(n0, n_copia);
printf("\n");
lista_imprimir(n0);
lista_liberar(n0);


exit(0);
}