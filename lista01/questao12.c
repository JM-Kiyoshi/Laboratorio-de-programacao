#include <stdio.h>

int main(){

    int numero1, numero2, aux;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("=======================\n");
    printf("Valor do primeiro numero: %d\n", numero1);
    printf("Valor do segundo numero: %d\n", numero2);

    aux = numero1;
    numero1 = numero2;
    numero2 = aux;

    printf("Valor do primeiro numero apos a troca: %d\n", numero1);
    printf("Valor do segundo numero apos a troca: %d\n", numero2);

    return 0;
}