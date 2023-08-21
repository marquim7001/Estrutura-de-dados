#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 0, retorno = 0;

    int array[8] = {2, 7, 2, 6, 11, 12, 2, 8};

    int pesquisa = 2;

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++){
        if (array[i] == pesquisa){
            retorno++;
        }
    }

    printf("%d\n", retorno); 

    return 0;
}