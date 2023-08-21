#include <stdio.h>
#include <string.h>

int main()
{
    char *array[] = {"GOIAS", "SP", "DF"};

    int tamanho = sizeof(array) / sizeof(array[0]);

    char *pesquisa = "DF";

    int retorno;

    for (int i = 0; i < tamanho; i++){
        if (strcmp(array[i], pesquisa) == 0){
            retorno = 1;
        }
        else{
            retorno = 0;
        }
    }
    printf("%d\n", retorno);
    
    return 0;
}