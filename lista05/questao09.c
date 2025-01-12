#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MX 100

void bubbleSort(int* vetor, int tam);
void imprimirVetor(int* vetor, int tam);

int main(){
    int* vetor = NULL;

    vetor = (int*) malloc(TAM*sizeof(int));
    if(vetor == NULL){
        printf("Memoria insuficiente.\n");
        exit(1);
    }

    srand(time(NULL));

    for (int i = 0; i < TAM; i++)
    {
        *(vetor+i) = rand() % MX;
    }

    printf("Vetor antes da ordenacao: ");
    imprimirVetor(vetor, TAM);
    bubbleSort(vetor, TAM);
    printf("Vetor depois da ordenacao: ");
    imprimirVetor(vetor, TAM);
    free(vetor);

    return 0;
}

void imprimirVetor(int* vetor, int tam){
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", *(vetor+i));
    }
    printf("\n");
}

void bubbleSort(int* vetor, int tam){
    int flag = 1;
    int aux;
    while(flag == 1){
        flag = 0;
        for (int i = 0; i <= tam; i++)
        {
            if(*(vetor+i) > *(vetor+i+1)){
                flag = 1;
                aux = *(vetor+i);
                *(vetor+i) = *(vetor+i+1);
                *(vetor+i+1) = aux;
            }
        }
    }
}