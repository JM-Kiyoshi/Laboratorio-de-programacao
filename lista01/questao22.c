#include <stdio.h>

int main(){
    int num;
    int aux;
    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &num);

    aux = num / 100;
    num = num % 100;
    aux = aux + ((num%10)*100);
    aux += (num / 10)*10;
    printf("%d", aux);

    return 0;
}