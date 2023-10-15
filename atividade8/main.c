#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main(int argc, char *argv[]) {


No* n0 = no("C", NULL);
No* n1 = no("E", NULL);
No* n1 = no("E", NULL);
No* n3 = no('U', NULL);
No* n4 = no('Z', NULL);  
No* n5 = no('T', NULL); 
No* n6 = no('Y', no('D', no('E', no('A', NULL))));


lista_inserir_no(n0,n1);
lista_inserir_no(n0,n2);
lista_inserir_no(n0,n3);
lista_inserir_no(n0, n4);
lista_inserir_no(n0, n5);
lista_inserir_no(n0, n6);


lista_imprimir(n0);

char valor = 'E';

printf("\nPOSSUI O VALOR %c? %d", valor, lista_verificar_existencia(n0, valor));

printf("\nQTDD DE VEZES QUE O VALOR APARECE %c = %d", valor, lista_verificar_ocorrencias(n0, valor));

printf("\n");
lista_imprimir_inversa(n0);

char v = 'S'; 
int posicao = 0;  


printf("\n");
lista_remover_no(n0, 'C');
lista_imprimir(n0);

lista_liberar(n0);
printf("\n"); 
lista_imprimir(n0); 

exit(0);
}