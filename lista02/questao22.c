#include <stdio.h>


int main(){
    int num;
    int aux = 10;
    int contador = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num%aux == 7){
        contador++;
    }

    while(aux < num){
        aux *= 10;
        if(num%aux/(aux/10) == 7){
            contador++;
        }
    }

    printf("contador: %d\n", contador);

    return 0;
}