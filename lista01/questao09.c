#include <stdio.h>

int main(){

    float comprimento, largura, altura;
    float volume;

    printf("Digite o valor do comprimento: ");
    scanf("%f", &comprimento);

    printf("Digite o valor da largura: ");
    scanf("%f", &largura);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    printf("Volume: %.1f", comprimento*altura*largura);

    return 0;
}