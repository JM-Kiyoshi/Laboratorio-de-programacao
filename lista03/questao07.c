#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAM 3
#define RN 20

int main(){

    srand(time(NULL));
    int vetNum[TAM];
    float mediaAritmetica = 0;
    float mediaGeometrica = 1;

    for (int i = 0; i < TAM; i++)
    {
        vetNum[i] = 0 + rand()%RN;
        printf("%d ", vetNum[i]);
        mediaAritmetica += vetNum[i];
        mediaGeometrica *= vetNum[i];
    }
    printf("\n");

    mediaAritmetica = mediaAritmetica / TAM;
    mediaGeometrica = pow(mediaGeometrica, (double)1/TAM);

    printf("Media aritmetica: %.2f\n", mediaAritmetica);
    printf("Media geometrica: %.2f\n", mediaGeometrica);
    return 0;
}