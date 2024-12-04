#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 80

int main(){

    char string1[TAM];
    char string2[TAM];
    char resultado[2*TAM];

    fgets(string1, TAM, stdin);
    fgets(string2, TAM, stdin);

    int i = 0;
    while(string1[i] != '\0'){
        if(string1[i] == '\n' && string1[i+1] == '\0'){
            string1[i] = '\0';
            break;
        }
        i++;
    }

    i = 0;
    while(string2[i] != '\0'){
        if(string2[i] == '\n' && string2[i+1] == '\0'){
            string2[i] = '\0';
            break;
        }
        i++;
    }

    printf("concatenação COM a strcat:\n%s\n", strcat(string1, string2));
    i = 0;
    while (string1[i] != '\0')
    {
        resultado[i] = string1[i];
        i++;
    }
    resultado[i] = '\0';
    
    printf("Concatenação SEM a strcat: \n");
    printf("%s\n", resultado);

    return 0;
}