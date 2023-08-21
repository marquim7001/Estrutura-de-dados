#include<stdio.h>

int main(){
    int array[4] = {2, 5, 8,9};

    int i = 0, soma = 0;

    for (i = 0; i < sizeof(array) / sizeof(array[0]); i++){
        soma += array[i];
    }

    printf(" %d", soma);
    
    return 0;
}