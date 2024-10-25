#include <stdio.h>

int main(){

    // ligar o bit
    unsigned int cod = 10;
    unsigned char pos;
    unsigned char mask = 0x01;

    puts("Digite a posicao que deseja ligar: ");
    scanf("%hhu", &pos);
    mask <<= pos-1;
    cod = cod | mask;

    printf("%d\n", cod);


    //desligar o bit

    puts("Digite a posicao que deseja desligar: ");
    scanf("%hhu", &pos);

    mask = 0x01;

    mask <<= pos-1;
    cod = cod & (~mask);
    printf("%d\n", cod);
    return 0;
}