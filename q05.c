#include <stdio.h>
#include <string.h>

#define TAM 100


int main (void) {
    char str1[TAM], str2[TAM];

    printf("Entre com a primeira string: ");
    fgets(str1, TAM, stdin);

    printf("Entre com a segunda string: ");
    fgets(str2, TAM, stdin);

    char* str3 = strcat(str1, str2);

    printf("O resultado é: %s\n", str3);



    return 0;
}