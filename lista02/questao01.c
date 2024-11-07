#include <stdio.h>

int main(){
    int op = 1;
    

    while(op != 0){
        printf("Digite um número entre 1 a 7: ");
        scanf("%d", &op);

        switch (op){
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda\n");
            break;
        case 3:
            printf("Terça\n");
            break;
        case 4:
            printf("Quarta\n");
            break;
        case 5:
            printf("Quinta\n");
            break;
        case 6:
            printf("Sexta\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        case 0:
            printf("Programa Encerrado.\n");
            op = 0;
            break;
        default:
            printf("Numero invalido!\n");
            break;
        }
    }


    return 0;
}