#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]){
    srand(time(NULL));
    if(argc != 2){
        exit(1);
    }

    int num = atoi(argv[1]);
    float *vetor = (float*) malloc(num*sizeof(float));
    int soma = 0;

    for (int i = 0; i < num; i++)
    {
        *(vetor+i) = rand()%20;
    }
    
    for (int i = 0; i < num; i++)
    {
        soma += *(vetor+i);
    }

    for (int i = 0; i < num; i++)
    {
        printf("%f ", *(vetor+i));
    }

    printf("\n");
    printf("somatorio: %d\n", soma);

    return 0;
}