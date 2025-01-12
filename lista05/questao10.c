#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MX 20

void imprimirVetor(int* vetor, int tam);

int main(){
    int *vetor1 = NULL;
    int *vetor2 = NULL;
    srand(time(NULL));

    vetor1 = (int*) malloc(TAM*sizeof(int));
    vetor2 = (int*) calloc(MX, sizeof(int));

    if(vetor1 == NULL || vetor2 == NULL){
        printf("Memoria insuficiente.\n");
        exit(1);
    }

    for (int i = 0; i < TAM; i++)
    {
        *(vetor1+i) = rand()%MX;
    }

    for (int i = 0; i < TAM; i++)
    {
        *(vetor2+*(vetor1+i)) = *(vetor2+*(vetor1+i))+1;
    }
    

    imprimirVetor(vetor1, TAM);
    imprimirVetor(vetor2, MX);

    free(vetor1);
    free(vetor2);
    

    return 0;
}

void imprimirVetor(int* vetor, int tam){
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", *(vetor+i));
    }
    printf("\n");
}