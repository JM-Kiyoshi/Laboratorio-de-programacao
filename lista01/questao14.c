#include <stdio.h>

int main(){
    float salarioDia = 50.25;
    int numDia = 0;
    float salarioFinal = 0;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &numDia);

    if(numDia < 10){
        salarioFinal = (numDia*salarioDia)*0.9;
        printf("salário: %.2f\n", salarioFinal);
    }
    else if(numDia > 10 && numDia < 20){
        salarioFinal = ((numDia*salarioDia)*1.2)*0.9;
        printf("salário: %.2f\n", salarioFinal);
    }
    else if(numDia > 20){
        salarioFinal = ((numDia*salarioDia)*1.3)*0.9;
        printf("salário: %.2f\n", salarioFinal);
    }
    return 0;
}