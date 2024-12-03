#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

int main()
{
    srand(time(NULL));
    char matr[TAM][TAM];
    printf("Entre com os valores da matriz: ");
    for(int i = 0; i < TAM; i++) {
        for(int j = 0 ; j < TAM ; j++) {
            matr[i][j] = rand() % 10;
        }
    }
    
    
    printf("Matriz Gerada: \n");
    
    for(int i = 0; i < TAM ; i++) {
        for(int j = 0 ; j  < TAM ; j++) {
            printf("%hhd ", matr[i][j]);
        }
        printf("\n");
    }
    
    int target, count = 0;
    printf("Entre com o valor esperado: ");
    scanf("%d", &target);
    
    for(int i = 0; i < TAM ; i++) {
        for(int j = 0; j < TAM ; j++) {
            if(matr[i][j] == target) {
                count++;
            }
        }
    }
    
    printf("O valor %d apareceu %d vezes!", target, count);
    
    printf("\n");
    
    return 0;
}