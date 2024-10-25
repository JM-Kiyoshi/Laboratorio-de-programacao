#include <stdio.h>

int main(){
    int segundos;
    int horas, minutos;
    printf("Digite um tempo em segundos: ");
    scanf("%d", &segundos);
    horas = segundos/3600;
    segundos -= 3600*horas;
    minutos = segundos/60;
    segundos -= 60*minutos;
    printf("%d horas %d minutos %d segundos\n", horas, minutos, segundos);

    return 0;
}