#include <stdio.h>

int main(){

    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("Soma.....: %d\n", numero1+numero2);
    printf("Produto..: %d\n", numero1*numero2);
    printf("Diferenca: %d\n", numero1-numero2);
    printf("Quociente: %d\n", numero1/numero2);
    printf("Resto....: %d\n", numero1%numero2);

    return 0;
}