#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

void selectionSort(int vetor[], int tam){
    int menor, aux;
    for (int i = 0; i < tam-1; i++)
    {
        menor = i;
        for (int j = i+1; j < tam; j++)
        {
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }

        if(menor != i){
            aux =  vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }
    }
}

void bubbleSort(int vetor[], int tam){
    int flag = 1;
    int aux;
    while (flag == 1)
    {
        flag = 0;
        for (int i = 0; i <= tam; i++)
        {
            if(vetor[i] > vetor[i + 1]){
                flag = 1;
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }
}

int main(){
    srand(time(NULL));
    int vetNum1[TAM];
    int vetNum2[TAM];
    int intervalo;

    printf("Digite um intervalo para os numeros pseudoaleatorios: ");
    scanf("%d", &intervalo);

    for (int i = 0; i < TAM; i++)
    {
        vetNum1[i] = rand()%intervalo;
        vetNum2[i] = rand()%intervalo;
    }

    printf("Vetor 1: ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", vetNum1[i]);
    }
    printf("\n");

    printf("Vetor 2: ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", vetNum2[i]);
    }
    printf("\n");
    
    selectionSort(vetNum1, TAM);
    printf("========================\n");
    printf("Vetor 1 com selection sort: ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", vetNum1[i]);
    }
    printf("\n");

    bubbleSort(vetNum2, TAM);
    printf("========================\n");
    printf("Vetor 2 com bubble sort: ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", vetNum2[i]);
    }
    printf("\n");

    return 0;
    
}
