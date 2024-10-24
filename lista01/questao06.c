#include <stdio.h>

int main(){

    int horas, minutos, segundos;

    printf("Digite o numero de horas: ");
    scanf("%d", &horas);

    printf("Digite o numeros de minutos: ");
    scanf("%d", &minutos);

    printf("Digite o numero de segundos: ");
    scanf("%d", &segundos);

    printf("O tempo total em segundos: %d", (horas*3600) + (minutos*60) + segundos);

    return 0;
}