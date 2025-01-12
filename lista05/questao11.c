#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3
#define MX 3

void imprimirMatriz(int**, int, int );
void imprimirVetor(int*, int);

int main(){
    srand(time(NULL));
    int *vetor1 = NULL;
    int *vetor2 = NULL;
    int **matriz = NULL;

    vetor1 = (int*) malloc(TAM*sizeof(int));
    vetor2 = (int*) malloc(TAM*sizeof(int));

    if(vetor1 == NULL || vetor2 == NULL){
        printf("Memoria insuficiente.\n");
        exit(1);
    }

    matriz = (int**) calloc(TAM, sizeof(int*));
    if(matriz == NULL){
        printf("Memoria insuficiente.\n");
        exit(2);
    }

    for (int i = 0; i < TAM; i++)
    {
        matriz[i] = (int*) calloc(TAM, sizeof(int));
    }

    for (int i = 0; i < TAM; i++)
    {
        *(vetor1+i) = rand()%MX;
        *(vetor2+i) = rand()%MX;
    }

    for (int i = 0; i < TAM; i++)
    {
        *(*(matriz+*(vetor1+i))+*(vetor2+i)) = *(*(matriz+*(vetor1+i))+*(vetor2+i)) + 1;
    }
    
    
    imprimirVetor(vetor1, TAM);
    imprimirVetor(vetor2, TAM);
    imprimirMatriz(matriz, TAM, TAM);

    free(vetor1);
    free(vetor2);
    free(matriz);


    return 0;
}

void imprimirVetor(int* vetor, int tam){
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", *(vetor+i));
    }
    printf("\n");
}

void imprimirMatriz(int **matriz, int altura, int largura){
    for(int k = 0; k<altura; k++){
        for(int j= 0; j<largura; j++){
            printf("%d\t", *(*(matriz+k) + j));
        }
        printf("\n");
    }
}