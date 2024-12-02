#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15

int main (void) {
    srand(time(NULL));

    float vect[TAM];
    float max, min;

    for(int i = 0; i < TAM; i++) {
        vect[i] = rand() % 100;
        printf("[%.2f] ", vect[i]);
    }


    printf("\n");

    min = vect[0];
    max = vect[0];

    for(int i = 0; i < TAM; i++) {
        if(max < vect[i]) max = vect[i];
        if(min > vect[i]) min = vect[i];
    }

    printf("A soma do maior com o menor vale: %.2f \n", max + min);

    return 0;
}
