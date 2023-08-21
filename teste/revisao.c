
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[]){

    int i = 11;
    int n =0; 
    float f = 1.5;
    double d = 1.555555;
    char c = 'J';
    char* string = " nao existe string em C.";

    if(n){
        printf("%d eh verdadeiro", n);

    }

    
    if(i){
        printf("%d eh verdadeiro", i); 
    }

    printf("\n %c - %s (%d)", c, string, strlen(string));
    printf("\n");

    for( n=0; n <strlen(string); n++){

        printf("%c", string[n]);
    }

    printf("\n");
    n =0;

    while(n < strlen(string)){

        printf("%c", string[n]);
        n++;
    }


    return 0;
}
