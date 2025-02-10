#include <stdio.h>
#include <stdlib.h>

struct aluno{
    float nota1;
    float nota2;
    float media;
};

int main(){
    struct aluno a1;

    printf("Digite a primeira nota: ");
    scanf("%f", &a1.nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &a1.nota2);

    a1.media = (a1.nota1 + a1.nota2) / 2;

    printf("Media: %f\n", a1.media);
}