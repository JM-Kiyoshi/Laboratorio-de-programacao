#include <stdio.h>

int main(){
    int num;
    int pot;
    printf("Digite um numero: ");
    scanf("%d", &num);
    num *= 2;
    printf("O numero digitado foi dobrado: %d\n", num);
    printf("Digite quantas vezes esse numero deve ser elevado a 2: ");
    scanf("%d", &pot);
    num <<= pot*2;
    printf("%d\n", num);


    return 0;
}