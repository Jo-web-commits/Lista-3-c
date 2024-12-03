#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define TAM 100


void bubbleSort(int arr[]) {
    bool swapped;
    for(int i = 0 ; i < TAM - 1 ; i++) {
        swapped = false;
        for(int j = 0 ; j < TAM - i - 1 ; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false) break;
    }
}


int main (void) {
    srand(time(NULL));
    int matrix[TAM];

    printf("Matriz gerada: ");
    for(int i = 0 ; i < TAM ; i++) {
        matrix[i] = rand() % 101;
        printf("[%d] ", matrix[i]);
    }

    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");

    printf("\nVetor ordenado: ");
    bubbleSort(matrix);
    for(int i = 0 ; i < TAM ; i++) {
        printf("[%d] ", matrix[i]);
    }

    return 0;
}