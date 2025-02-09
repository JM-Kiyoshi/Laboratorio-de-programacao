#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 5

int main(){
    srand(time(NULL));

    int *v1 = (int*) malloc(TAM*sizeof(int));
    int *v2 = (int*) malloc(TAM*sizeof(int));
    float *vr = (float*) malloc(TAM*sizeof(float));

    float soma = 0;

    for (int i = 0; i < TAM; i++)
    {
        v1[i] = rand()%10;
        v2[i] = rand()%10;
    }

    for (int i = 0; i < TAM; i++)
    {
        float aux = pow(v1[i]-v2[i], 2);
        soma += aux;
    }

    soma = soma / TAM;

    soma = sqrt(soma);    
    
    printf("Resultado: %f\n", soma);

    return 0;
}