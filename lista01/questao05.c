#include <stdio.h>

int main(){
    float altura;
    float resultado = 0;
    char sexo;

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Digite o seu sexo: ");
    getchar();
    scanf("%c", &sexo);

    if(sexo == 'm' || sexo == 'M'){
        resultado = 72.7 * altura - 58;
        printf("Peso ideal masculino: %.1f", resultado);
    }
    if(sexo == 'f' || sexo == 'F'){
        resultado = 62.1 * altura - 44.7;
        printf("Peso ideal feminino: %.1f", resultado);
    }

    return 0;
}