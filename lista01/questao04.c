#include <stdio.h>

int main(){

    float numero;

    printf("Digite o valor da conta: ");
    scanf("%f", &numero);

    printf("Valor a ser pago: R$%.2f", numero*1.1);

    return 0;
}