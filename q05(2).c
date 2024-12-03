#include <stdio.h>
#include <string.h>

#define TAM 100

void concatManual(char *str1, char *str2, char *result) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0';
}




int main (void) {
    char str1[TAM]; 
    char str2[TAM]; 
    char result[TAM * 2];

    printf("Entre com a primeira string: ");
    fgets(str1, TAM, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Entre com a segunda string: ");
    fgets(str2, TAM, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    concatManual(str1, str2, result);
    printf("\nString concatenada manualmente: %s", result);
    return 0;
}