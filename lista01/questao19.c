#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    printf("%s", num%2? "impar\n" : "par\n");
}