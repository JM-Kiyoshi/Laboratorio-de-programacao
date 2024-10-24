#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O triplo do numero informado: %d\n", num*3);
    printf("O quadrado do numero informado: %d\n", num*num);
    printf("O meio do numero informado: %.1f\n", (float)num/2);
    return 0;
}