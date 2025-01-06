#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10

int main(){
    srand(time(NULL));
    int *vetor = NULL;
    int numIndices = 5;

    vetor = (int*)malloc(numIndices*sizeof(int));

    if(vetor == NULL){
        printf("Memoria insuficiente.\n");
        exit(1);
    }

    for (int i = 0; i < numIndices; i++)
    {
        *(vetor+i) = rand() % MX;
    }
    
    for (int i = 0; i < numIndices; i++)
    {
        printf("endereço: %p - valor: %d\n", (vetor+i), *(vetor+i));
    }



    return 0;
}