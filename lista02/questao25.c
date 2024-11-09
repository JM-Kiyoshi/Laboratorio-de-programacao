#include <stdio.h>

int main(){

    double pi;
    int num;
    float aux = 1;
    
    for (int i = 1; i <= 1000; i++)
    {
        if(i%2 == 0){
            pi = pi - 4/(aux); 
        }
        else{
            pi = pi + 4/(aux);
        }
        aux += 2;
        printf("%d termo; pi = %f\n", i, pi);
    }

    
    return 0;
}