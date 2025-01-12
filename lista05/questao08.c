#include <stdio.h>
#include <stdlib.h>

#define TAM 80

int main(){
    char *string = NULL;
    char caractere;
    
    string = (char*) malloc(TAM*sizeof(char));

    if(string == NULL){
        printf("Memoria insuficiente.\n");
        exit(1);
    }

    fgets(string, TAM, stdin);

    printf("Digite um caractere a ser buscado na string: ");
    scanf(" %c", &caractere);

    int flag = 0;
    for (int i = 0; *(string+i) != '\n'; i++)
    {
        if(*(string+i) == caractere){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("O caractere existe na string.\n");
    }
    else{
        printf("O caractere nao existe na string.\n");
    }
    
}