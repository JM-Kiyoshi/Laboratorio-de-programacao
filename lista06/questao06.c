#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void selectionSort(int *v, int tam){
    int menor, aux;
    for (int i = 0; i < tam-1; i++)
    {
        menor = i;
        for (int j = i+1; j < tam; j++)
        {
            if(v[j] < v[menor]){
                menor = j;
            }
        }

        if(menor != i){
            aux =  v[i];
            v[i] = v[menor];
            v[menor] = aux;
        }
    }
}

int main(){
    srand(time(NULL));

    float media = 0;
    float mediana;
    int moda;

    int *v = (int *) malloc(TAM*sizeof(int));
    
    for (int i = 0; i < TAM; i++)
    {
        *(v+i) = rand()%10;
    }

    selectionSort(v, TAM);

    if(TAM % 2 == 0){
        mediana = ((float)v[TAM/2-1] + v[(TAM/2)])/2;
    }
    else{
        int aux = v[TAM/2];
        mediana = aux;
    }

    for (int i = 0; i < TAM; i++)
    {
        media += v[i];
        printf("%d ", v[i]);
    }

    int maxcontador = 0;
    moda = v[0];
    
    for (int i = 0; i < TAM; i++) {
        int contador = 0;
        
        for (int j = 0; j < TAM; j++) {
            if (v[j] == v[i]) {
                contador++;
            }
        }
        
        if (contador > maxcontador) {
            maxcontador = contador;
            moda = v[i];
        }
    }
    

    media = media/TAM;

    printf("\n");
    printf("Mediana: %f\n", mediana);
    printf("Media: %f\n", media);
    printf("Moda: %d\n", moda);
    


    return 0;
}