#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]){
    srand(time(NULL));
    if(argc != 2){
        printf("Formato: %s <tamanho do vetor>\n", argv[0]);
        exit(1);
    }
    int num = atoi(argv[1]);
    int *vetor = (int*) malloc(num*sizeof(int));

    if(vetor == NULL){
        printf("Memoria insuficiente.\n");
        exit(2);
    }

    for (int i = 0; i < num; i++)
    {
        *(vetor+i) = rand()%10;
    }
    

    int *menor = vetor;
    int valorMenor = *vetor;
    for (int i = 0; i < num; i++)
    {
        if(*(vetor+i) < valorMenor){
            valorMenor = *(vetor+i);
            menor = (vetor+i);
        }
    }
    
    printf("Endereco: %p \nMenor valor: %d\n", menor, valorMenor);

    return 0;
}