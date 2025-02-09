#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int menor, maior;

    int *vetor1 = (int*) malloc(5*sizeof(int));
    float *vetor2 = (float*) malloc(5*sizeof(float));

    for (int i = 0; i < 5; i++)
    {
        *(vetor1+i) = rand()%55;
    }

    maior = menor = *(vetor1);
    for (int i = 0; i < 5; i++)
    {
        if(menor > *(vetor1+i)){
            menor = *(vetor1+i);
        }
        if(maior < *(vetor1+i)){
            maior = *(vetor1+i);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        *(vetor2+i) = (*(vetor1+i)-menor)/((float)maior - menor);
    }
    
    
    for (int i = 0; i < 5; i++)
    {
        printf("%f ", *(vetor2+i));
    }
    

    return 0;
}