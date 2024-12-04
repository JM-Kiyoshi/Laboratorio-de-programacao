#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TAM 80

int main(){

    char string[TAM];

    printf("Digite uma string: ");
    fgets(string, TAM, stdin);

    for (int i = strlen(string); i >= 0; i--)
    {
        printf("%c", string[i]);
    }
    printf("\n");
    

    return 0;
}