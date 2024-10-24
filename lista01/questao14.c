#include <stdio.h>

// Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o n ́umero de
// dias trabalhados pelo vendedor e imprima o valor l ́ıquido a ser pago ao mesmo, sabendo que se ele
// trabalhou at ́e 10 dias n ̃ao tem direito `a gratifica ̧c ̃ao, se ele trabalhou acima de 10 dias e at ́e 20 dias
// tem direito `a gratifica ̧c ̃ao de 20%, se ele trabalhou acima de 20 dias tem direito `a gratifica ̧c ̃ao de 30%.
// Sempre s ̃ao descontados 10% de imposto de renda em cima do valor bruto.

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