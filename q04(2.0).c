#include <stdio.h>

#define TAM 100


int custom_strcmp(const char* str1, const char* str2) {
    int i = 0;

    while(str1[i] != '\0'&& str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            return 1;
        }
        i++;
    }

    if(str1[i] != str2[i]) {
        return 1;
    }

    return 0;
}

int main (void) {
    char str1[TAM], str2[TAM];

    printf("Entre com a primeira string: ");
    fgets(str1, TAM, stdin);

    printf("Entre com a segunda string: ");
    fgets(str2, TAM, stdin);


    if(custom_strcmp(str1, str2) == 0) {
        printf("As string são iguais !\n");
    }
    else printf("As strings não são iguais !\n");

    return 0;
}