#include <stdio.h>
#include <stdlib.h>

#define TAM 80

int main(){
    char *string = NULL;
    int contador = 0;

    string = (char *) malloc(TAM*sizeof(char));

    if(string == NULL){
        printf("Memória insuficiente.\n");
        exit(1);
    }

    fgets(string, 80, stdin);

    for (int i = 0; *(string+i) != '\n'; i++)
    {
        contador++;
    }

    printf("tamanho da string: %d", contador);

    free(string);
    
    return 0;
}