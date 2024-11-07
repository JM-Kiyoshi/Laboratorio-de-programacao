#include <stdio.h>

int main(){ //somatorio de todos os pares, para os dois limites

    int limiteA, limiteB;
    int soma = 0;

    printf("Digite o limite A: ");
    scanf("%d", &limiteA);

    printf("Digite o limite B: ");
    scanf("%d", &limiteB);

    if(limiteA > limiteB){
        for (int i = limiteB; i <= limiteA; i++)
        {
            if(i%2 == 0){
                soma += i;
            }
        }
    }
    else{
        for (int i = limiteA; i <= limiteB; i++)
        {
            if(i%2 == 0){
                soma += i;
            }
        }        
    }

    printf("Soma: %d\n", soma);

    return 0;
}