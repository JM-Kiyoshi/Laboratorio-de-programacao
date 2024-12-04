#include <stdio.h>
#include <stdlib.h>

#define TAM 15
#define RN 10
int main(){
    float vetNum[TAM];
    float menor, maior;
    srand(time(NULL));

    for (int i = 0; i < TAM; i++)
    {
        vetNum[i] = (float)rand() / RAND_MAX*RN;
    }

    maior = menor = vetNum[0];

    for (int i = 0; i < TAM; i++)
    {
        if(maior < vetNum[i]){
            maior = vetNum[i];
        }
        if(menor > vetNum[i]){
            menor = vetNum[i];
        }
    }
    

    for (int i = 0; i < TAM; i++)
    {
        printf("%.2f ", vetNum[i]);
    }
    printf("\n");
    
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);

    return 0;
}