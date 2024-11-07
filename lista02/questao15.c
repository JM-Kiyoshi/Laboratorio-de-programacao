#include <stdio.h>

int main(){
    int acumulador = 1;
    
    printf("3^0 = %d\n", acumulador);
    for (int i = 1; i < 7; i++)
    {
        acumulador = acumulador*3;
        printf("3^%d = %d\n", i, acumulador);
    }
    

    return 0;
}