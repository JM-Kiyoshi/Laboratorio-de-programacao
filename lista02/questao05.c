#include <stdio.h>

int main(){
    int num = 1;
    int menor, maior;

    for(int i = 1; num != 0; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num == 0){
            printf("Programa encerrado!\n");
            break;
        }
        if(i == 1){
            maior = num;
            menor = num;
        }
        if(maior < num){
            maior = num;
        }
        if(menor > num){
            menor = num;
        }
        printf("==============\n");
        printf("Maior: %d\n", maior);
        printf("Menor: %d\n", menor);
        printf("Numero digitado: %d\n", num);
        printf("==============\n");
    }
    return 0;
}