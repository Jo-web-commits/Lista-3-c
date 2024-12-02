#include <stdio.h>
#include <string.h>

#define TAM 100


int main (void) {
    char str1[TAM], str2[TAM];

    printf("Entre com a primeira string: ");
    fgets(str1, TAM, stdin);

    printf("Entre com a segunda string: ");
    fgets(str2, TAM, stdin);

    if(strcmp(str1, str2) == 0) {
        printf("As strings são iguais!\n");
    }
    else printf("As duas strings são diferentes!\n");


    return 0;
}