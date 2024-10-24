#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Sucessor do numero: %d\n", numero+1);
    printf("Antecessor do numero: %d\n", numero-1);

    return 0;
}