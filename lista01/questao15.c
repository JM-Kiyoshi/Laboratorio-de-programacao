#include <stdio.h>

int main(){
    float salarioBrutoProfessor, salarioLiquidoProfessor;
    float valorHoraAula;
    float horasTrabalhadas;
    float descontoINSS;

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);
    printf("Digite o valor da hora aula: ");
    scanf("%f", &valorHoraAula);
    printf("Digite o desconto do INSS em percentual: ");
    scanf("%f", &descontoINSS);

    salarioBrutoProfessor = horasTrabalhadas*valorHoraAula;
    salarioLiquidoProfessor = salarioBrutoProfessor * (1-(descontoINSS/100));

    printf("Salario bruto: %.2f\n", salarioBrutoProfessor);
    printf("Salario liquido: %.2f\n", salarioLiquidoProfessor);

    return 0;
}