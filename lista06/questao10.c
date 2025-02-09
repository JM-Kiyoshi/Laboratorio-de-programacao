#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3
int main(){
    srand(time(NULL));

    int **matriz = (int**) malloc(TAM*sizeof(int*));

    for (int i = 0; i < TAM; i++)
    {
        *(matriz+i) = (int*) malloc(TAM*sizeof(int));
    }

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            *(*(matriz+i)+j) = rand()%10;
        }
    }

    
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf("%d\t", *(*(matriz+i)+j));
        }
        printf("\n");
    }
    
    int soma = 0;
    for (int i = 0; i < TAM; i++)
    {
        soma += *(*(matriz+i)+i);
    }


    if(soma % 2 == 0){
        printf("soma da diagonal eh par.\n");
    }
    else{
        printf("soma da diagonal eh impar.\n");
    }
    return 0;
}