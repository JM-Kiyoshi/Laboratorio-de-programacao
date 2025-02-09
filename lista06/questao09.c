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
    
    int t;
    printf("Digite um numero T: ");
    scanf("%d", &t);

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if(*(*(matriz+i)+j) > t){
                *(*(matriz+i)+j) = 1;
            }
            else{
                *(*(matriz+i)+j) = 0;
            }
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


    return 0;
}