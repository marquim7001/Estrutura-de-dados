#include <string.h>
#include <stdlib.h>
#include "bubble_sort.h"

void swap(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void bubbleSort(char **arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Chama a função swap para trocar as palavras
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}