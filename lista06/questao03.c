#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void armazenaValor(int **v, int indice, int *Enderecovalor){
    v[indice] = Enderecovalor;
}

int main(int argc, char* argv[]){
    srand(time(NULL));
    if(argc != 2){
        printf("Formato: %s <tamanho do vetor>\n", argv[0]);
        exit(1);
    }
    int num = atoi(argv[1]);
    int *vetor = (int*) malloc(num*sizeof(int));
    int **vetorVazio = (int**) calloc(2, sizeof(int));

    if(vetor == NULL){
        printf("Memoria insuficiente.\n");
        exit(2);
    }

    for (int i = 0; i < num; i++)
    {
        *(vetor+i) = rand()%10;
    }
    

    int *menor = vetor;
    int *maior = vetor;
    int valorMenor = *vetor;
    int valorMaior = *vetor;
    for (int i = 0; i < num; i++)
    {
        if(*(vetor+i) < valorMenor){
            valorMenor = *(vetor+i);
            menor = (vetor+i);
        }
        if(*(vetor+i) > valorMaior){
            valorMaior = *(vetor+i);
            maior = (vetor+i);
        }
    }
    
    armazenaValor(vetorVazio, 0, menor);
    armazenaValor(vetorVazio, 1, maior);

    printf("Endereco: %p \nMenor valor: %d\n", *(vetorVazio), valorMenor);
    printf("Endereco: %p \nMaior valor: %d\n", *(vetorVazio+1), valorMaior);

    return 0;
}