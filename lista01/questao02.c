#include <stdio.h>

int main(){
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    printf("Numero com apenas uma casa decimal: %.1f", num);
    return 0;
}