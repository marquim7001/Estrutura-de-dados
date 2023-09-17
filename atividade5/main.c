#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <arquivo_de_entrada.txt>\n", argv[0]);
        return 1;
    }

    char *inputFileName = argv[1];
    char *outputFileName = "arq_palavras_ordenado.txt";

    FILE *inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        return 1;
    }

    FILE *outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL) {
        perror("Erro ao criar o arquivo de saída");
        fclose(inputFile);
        return 1;
    }

    char **palavras = NULL;
    int numPalavras = 0;
    char palavra[100];

    while (fgets(palavra, sizeof(palavra), inputFile) != NULL) {
        // Remove o caractere de nova linha
        palavra[strcspn(palavra, "\n")] = '\0';

        // Aloca espaço para a nova palavra
        palavras = (char **)realloc(palavras, (numPalavras + 1) * sizeof(char *));
        palavras[numPalavras] = (char *)malloc(strlen(palavra) + 1);

        strcpy(palavras[numPalavras], palavra);

        numPalavras++;
    }

    // Chama a função de ordenação (Bubble Sort)
    bubbleSort(palavras, numPalavras);

    for (int i = 0; i < numPalavras; i++) {
        fprintf(outputFile, "%s\n", palavras[i]);
        free(palavras[i]);
    }

    free(palavras);
    fclose(inputFile);
    fclose(outputFile);

    printf("Palavras ordenadas com sucesso e gravadas em %s\n", outputFileName);

    return 0;
}