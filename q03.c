#include <stdio.h>

#define TAM 100

int main (void) {
    char str[TAM];
    int i = 0;

    printf("Entre com uma string: ");
    fgets(str, TAM, stdin);

    while(str[i] != '\0') {
        i++;
    }

    if(str[i-1] == '\n') {
        i--;
    }
    
    printf("Quantidade de caracteres que a string possui vale: %d\n", i);


    return 0;
}