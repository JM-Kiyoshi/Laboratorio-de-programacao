#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p1 = NULL;
    int *menor = NULL;

    p1 = (int*)malloc(sizeof(int));
    menor = (int*)malloc(sizeof(int));
    if(p1 == NULL || menor == NULL){
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    printf("Digite um numero diferente de 0: ");
    scanf("%d", p1);
    *menor = *p1;
    for(int i = 0; *p1 != 0; i++){
        printf("Digite um numero(Digite 0 para sair): ");
        scanf("%d", p1);
        if(*p1 == 0){
            break;
        }
        
        if(*menor > *p1){
            *menor = *p1;
        }
        printf("Menor provisorio: %d\n", *menor);
    }
    
    printf("Menor definitivo: %d\n", *menor);

    return 0;
}