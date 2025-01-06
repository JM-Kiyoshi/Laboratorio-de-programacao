#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor1,valor2;
    int *p1 = NULL;
    int *p2 = NULL;
    int *soma = NULL;

    p1 = (int*)malloc(sizeof(int));
    p2 = (int*)malloc(sizeof(int));
    soma = (int*)malloc(sizeof(int));

    if(p1 == NULL || p2 == NULL || soma == NULL){
        printf("Memoria insuficiente.\n");
        exit(1);
    }

    printf("Digite o primeiro valor: ");
    scanf("%d", p1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", p2);

    *soma = *p1 + *p2;
    
    printf("Endereço do p1: %p Valor: %d\n", p1, *p1);
    printf("Endereço do p2: %p Valor: %d\n", p2, *p2);
    printf("Endereço da soma: %p Soma: %d\n", soma, *soma);

    free(p1);
    free(p2);
    free(soma);

    return 0;
}