#include <stdio.h>

int main(){
    int alturaJose = 150;
    int alturaPedro = 110;
    int contadorAno = 0;

    while(alturaJose >= alturaPedro){
        alturaJose += 2;
        alturaPedro += 3;
        contadorAno++;
        
    }

    printf("Pedro será maior que José em %d anos.\n", contadorAno);

    return 0;
}