#include <stdio.h>
#include <math.h>

int main(){
    double coordenadax1, coordenadax2, coordenaday1, coordenaday2;
    double distancia;
    printf("Digite o valor da coordenada x1: ");
    scanf("%lf", &coordenadax1);
    
    printf("Digite o valor da coordenada y1: ");
    scanf("%lf", &coordenaday1);
    
    printf("Digite o valor da coordenada x2: ");
    scanf("%lf", &coordenadax2);
    
    printf("Digite o valor da coordenada y2: ");
    scanf("%lf", &coordenaday2);

    distancia = sqrt(pow(coordenadax2-coordenadax1, 2)+ pow(coordenaday2-coordenaday1, 2));

    printf("Distancia: %lf\n", distancia);

    return 0;
}