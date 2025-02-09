#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

    if(argc != 4){
        printf("Formato: %s <codigo da operacao: 'x' ou '+'> <valor1> <valor2>\n", argv[0]);
        exit(1);
    }
    char* op = argv[1];
    if(*op == 'x'){
        int num1 = atoi(argv[2]);
        int num2 = atoi(argv[3]);
        printf("Multiplicacao: %d\n", num1*num2);
    }

     else if(*op == '+'){
        int num1 = atoi(argv[2]);
        int num2 = atoi(argv[3]);
        printf("Soma: %d\n", num1+num2);
     }

    return 0;
}