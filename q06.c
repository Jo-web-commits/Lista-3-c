#include <stdio.h>

#define TAM 100

int main()
{
    char str[TAM];
    char result[TAM];
    printf("Entre com uma string: ");
    fgets(str, TAM, stdin);

    int len = 0;
    while(str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    
    
    for(int i = 0; i < len; i++) {
        result[i] = str[len - i - 1];
    }
    
    printf("Original: %s\n", str);
    printf("Inversa: %s\n", result);

    return 0;
}