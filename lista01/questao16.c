#include <stdio.h>

int main(){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("número em módulo: %d\n", num<0? num*(-1) : num);
}