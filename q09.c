#include <stdio.h>

#define TAM 3

int main()
{
    char matr[TAM][TAM];
    printf("Entre com os valores da matriz: ");
    for(int i = 0; i < TAM; i++) {
        for(int j = 0 ; j < TAM ; j++) {
            char value;
            scanf("%hhd", &value);
            matr[i][j] = value;
        }
    }
    
    
    printf("Matriz Gerada: \n");
    
    for(int i = 0; i < TAM ; i++) {
        for(int j = 0 ; j  < TAM ; j++) {
            printf("%hhd ", matr[i][j]);
        }
        printf("\n");
    }
    
    printf("Elementos da diagonal principal: ");
    
    for(int i = 0; i < TAM; i++) {
        printf("[%d] ", matr[i][i]);
    }
    
    printf("\n");
    
    return 0;
}