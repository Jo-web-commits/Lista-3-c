#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

#define TAM 3

int main()
{
    srand(time(NULL));
    char numbers[TAM];
    
    for(int i = 0; i < TAM; i++) {
        numbers[i] = rand() % 20;
    }
    
    printf("Vetor gerado: ");
    for(int i = 0; i < TAM ; i++) {
        printf("[%d]", numbers[i]);
    }
    
    float aritmética = 0;
    for(int i = 0; i < TAM; i++) {
        aritmética += numbers[i];
    }
    
    printf("\nMédia aritmética: %.2f", aritmética / 3);
    
    float geometrica = 1;
    for(int i = 0; i < TAM ; i++) {
        geometrica *= numbers[i];
    }
    
    printf("\nMédia geométrica: %.2f", pow(geometrica, 1.0 / TAM));
    return 0;
}