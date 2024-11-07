#include <stdio.h>

int main(){

    int limiteA, limiteB;
    int contador = 0;

    printf("Digite o limite A: ");
    scanf("%d", &limiteA);

    printf("Digite o limite B: ");
    scanf("%d", &limiteB);

    if(limiteA > limiteB){
        for (int i = limiteB; i <= limiteA; i++)
        {
            if(i%3 == 0){
                contador++;
            }
        }
    }
    else{
        for (int i = limiteA; i <= limiteB; i++)
        {
            if(i%3 == 0){
                contador++;
            }
        }        
    }

    printf("Quantidade de numeros divisiveis por 3: %d\n", contador);

    return 0;
}