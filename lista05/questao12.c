#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MX 5

void imprimirMatriz(int**, int, int );
void imprimirVetor(int*, int);

int main(){
    srand(time(NULL));
    int *vetor1 = NULL;
    int *vetor2 = NULL;
    int **matriz = NULL;

    vetor1 = (int*) malloc(TAM*sizeof(int));
    vetor2 = (int*) calloc(TAM, sizeof(int));

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
    }

    for (int i = 0; i < TAM; i++)
    {
        if(*(vetor1+i) > 0 && *(vetor1+i) <= 3){
            *(vetor2+i) = *(vetor1+i);
        }
        if(*(vetor1+i) > 3 && *(vetor1+i) <= 5){
            if(vetor1[i-1] < 0){
                *(vetor2+i) = *(vetor1+i);
            }
            else{
                *(vetor2+i) = *(vetor1+(i-1));
            }
        }
        if(*(vetor1+i) > 5 && *(vetor1+i) <= 5){
            if(vetor1[i+1] > TAM){
                *(vetor2+i) = *(vetor1+i);
            }
            else{
                *(vetor2+i) = *(vetor1+(i+1));
            }
        }
        if(*(vetor1+i) > 8 && *(vetor1+i) <= 9){
            if(vetor1[i-2] < 0){
                *(vetor2+i) = *(vetor1+i);
            }
            else{
                *(vetor2+i) = *(vetor1+(i-2));
            }
        }
        if(*(vetor1+i) > 9 && *(vetor1+i) <= 10){
            if(vetor1[i+2] > TAM){
                *(vetor2+i) = *(vetor1+i);
            }
            else{
                *(vetor2+i) = *(vetor1+(i+2));
            }
        }
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