#include <stdio.h>
#include <stdlib.h>

#define TAM 80

int main(){
    char *string1 = NULL;
    char *string2 = NULL;

    string1 = (char *) malloc(TAM*sizeof(char));
    string2 = (char *) malloc(TAM*sizeof(char));

    if(string1 == NULL || string2 == NULL){
        printf("Memória insuficiente.\n");
        exit(1);
    }

    fgets(string1, TAM, stdin);

    int i = 0;
    for (i = 0; *(string1+i) != '\n'; i++)
    {
        *(string2+i) = *(string1+i);
    }
    *(string2+i) = '\0';
    printf("teste: %s\n", string2);

    free(string1);
    free(string2);


    return 0;
}