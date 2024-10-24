#include <stdio.h>

int main(){

    float TempCelsius;
    float TempFahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &TempCelsius);

    TempFahrenheit = (9*TempCelsius + 160)/5;

    printf("Temperatura em Farenheint: %.1f", TempFahrenheit);

    return 0;
}