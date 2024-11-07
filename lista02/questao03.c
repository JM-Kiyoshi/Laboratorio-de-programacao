#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero que deseja saber o fatorial: ");
    scanf("%d", &num);

    for (int i = num-1; i > 0; i--)
    {
        num *= i;
    }

    printf("Resultado: %d\n", num);

    return 0;
    
}