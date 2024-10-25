#include <stdio.h>
#include <math.h>

// Escreva um programa que solicite 3 n ́umeros em ponto flutuante e imprima a m ́edia aritm ́etica e
// geom ́etrica. (Utilize a fun ̧c ̃ao pow(base, expoente) da biblioteca math.h).

int main(){
    double num1, num2, num3;
    double mediaAritmetica, mediaGeometrica;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%lf", &num3);

    mediaAritmetica = (num1+num2+num3)/3;
    mediaGeometrica = pow((num1 * num2 * num3), 1.0/3);

    printf("Media aritmetica: %lf\n", mediaAritmetica);
    printf("Media geometrica: %lf\n", mediaGeometrica);

    return 0;
}