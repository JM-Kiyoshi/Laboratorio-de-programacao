#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p1 = NULL;
    int *p2 = NULL;
    int *aux = NULL;

    p1 = (int*)malloc(sizeof(int));
    p2 = (int*)malloc(sizeof(int));
    aux = (int*)malloc(sizeof(int));

    printf("Digite o primeiro numero: ");
    scanf("%d", p1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", p2);

    printf("Valores antes da troca:\n");
    printf("P1: %d\n", *p1);
    printf("P2: %d\n", *p2);

    *aux = *p1;
    *p1 = *p2;
    *p2 = *aux;

    printf("Valores depois da troca:\n");
    printf("P1: %d\n", *p1);
    printf("P2: %d\n", *p2);

    free(p1);
    free(p2);
    free(aux);

    return 0;
}