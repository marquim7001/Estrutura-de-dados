#include<stdio.h>

int main()
{
    int valor[4];
    int i;
		for(i=0; i<4; i++){
		scanf("%d", &valor[i]);
	}
	
    int  maior=valor[0];
	int menor=valor[0];
	
		
	for( i = 1; i<4; i++){
		if (valor[i] > maior){
			maior = valor[i];		
		}
		
		if(valor[i] < menor){
			menor = valor[i];
		}	
	}
		
		printf(" maior = %d \n", maior );
			printf("o menor valor do array[%d]\n", menor );

    return 0;
}