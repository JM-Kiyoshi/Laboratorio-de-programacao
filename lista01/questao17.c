#include <stdio.h>

int main(){
    float pi = 3.14159;
    float raio;

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    printf("Diamentro: %f\n", raio*2);
    printf("Circunferencia: %f\n", 2*pi*raio);
    printf("Area: %f\n", pi*raio*raio);

    return 0;
}