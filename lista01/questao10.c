#include <stdio.h>

int main(){

    float ValorEmReais;
    float CotacaoDolar;

    printf("Digite o valor em reais que deseja converter para dolar: ");
    scanf("%f", &ValorEmReais);

    printf("Digite o valor da cotacao do dolar atual: ");
    scanf("%f", &CotacaoDolar);

    printf("Valor convertido para dolar: %.2f", ValorEmReais/CotacaoDolar);

    return 0;
}