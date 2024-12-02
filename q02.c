#include <stdio.h>

#define TAM 100


int main (void) {
    char str[TAM], ch;
    char boolean = 0;

    printf("Entre com uma string: \n");
    fgets(str, TAM, stdin);



    printf("Entre com um caractere: ");
    scanf("%c", &ch);


    for(int i = 0; i < TAM ; i++) {
        if(str[i] == ch) {
            printf("Caractere encontrado na posição %d!\n", i+1);
            boolean = 1;
        }
    }
    if(!boolean) {
        printf("Caractere não encontrado!\n");
    }

    return 0;
}