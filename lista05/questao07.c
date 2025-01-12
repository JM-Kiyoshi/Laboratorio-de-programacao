#include <stdio.h>
#include <stdlib.h>

#define TAM 80

int main(){
    char *string1 = NULL;
    char *string2 = NULL;
    char *string3 = NULL;

    string1 = (char*) malloc(TAM*sizeof(char));
    string2 = (char*) malloc(TAM*sizeof(char));
    string3 = (char*) malloc(2*TAM*sizeof(char));

    if(string1 == NULL || string2 == NULL || string3 == NULL){
        printf("Memoria insuficiente.\n");
        exit(1);
    }

    printf("Digite a primeira string: ");
    fgets(string1, TAM, stdin);

    printf("Digite a segunda string: ");
    fgets(string2, TAM, stdin);

    int i = 0;
    int j = 0;
    for (i = 0; *(string1+i) != '\n'; i++)
    {
        *(string3+j) = *(string1+i);
        j++;
    }

    for (i = 0; *(string2+i) != '\n'; i++)
    {
        *(string3+j) = *(string2+i);
        j++;
    }

    *(string3+j) = '\0';
    
    printf("string concatenada: %s\n", string3);

    return 0;
}