#include <stdio.h>

int main(){

    int num01, num02;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num01);
    printf("Digite o segundo numero: ");
    scanf("%d", &num02);

    printf("%s", num01%num02? "nao sao multiplos" : "sao multiplos");

    return 0;
}