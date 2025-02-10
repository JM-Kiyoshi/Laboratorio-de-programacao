#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct estrutura{
    int *vetor;
    int numElementos;
    float media;
};


int main(){
    srand(time(NULL));
    struct estrutura e1;

    printf("Digite o numero de elementos: ");
    scanf("%d", &e1.numElementos);

    e1.vetor = (int *) malloc(e1.numElementos*sizeof(int));

    for (int i = 0; i < e1.numElementos; i++)
    {
        e1.vetor[i] = rand()%10;
    }


    for (int i = 0; i < e1.numElementos; i++)
    {
        e1.media += e1.vetor[i];
    }

    e1.media = e1.media/e1.numElementos;

    for (int i = 0; i < e1.numElementos; i++)
    {
        printf("%d ", e1.vetor[i]);
    }

    printf("media: %f\n", e1.media);
    return 0;
}
